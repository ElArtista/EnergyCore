#include "gbuffer.h"
#include <string.h>
#include <assert.h>
#include <glad/glad.h>

#define array_length(a) (sizeof(a)/sizeof(a[0]))

void gbuffer_init(struct gbuffer* gb, int width, int height, int multisample)
{
    memset(gb, 0, sizeof(struct gbuffer));
    gb->multisample = multisample;

    /* Store dimensions */
    gb->width = width;
    gb->height = height;

    /* Create framebuffer */
    glGenFramebuffers(1, &gb->fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, gb->fbo);

    /* Create data textures */
    struct {
        GLuint* id;
        GLint ifmt;
        GLenum fmt;
        GLenum pix_dtype;
        GLenum attachment;
    } data_texs[] = {
#ifdef WITH_ACCUM_BUF
        {
            &gb->accum_buf,
            GL_RGB16F,
            GL_RGB,
            GL_FLOAT,
            GL_COLOR_ATTACHMENT0
        },
#endif
        {
            &gb->normal_buf,
            GL_RGB16F,
            GL_RGB,
            GL_FLOAT,
            GL_COLOR_ATTACHMENT1
        },
        {
            &gb->albedo_buf,
            GL_RGBA,
            GL_RGBA,
            GL_UNSIGNED_BYTE,
            GL_COLOR_ATTACHMENT2
        },
        {
            &gb->depth_stencil_buf,
            GL_DEPTH24_STENCIL8,
            GL_DEPTH_STENCIL,
            GL_UNSIGNED_INT_24_8,
            GL_DEPTH_STENCIL_ATTACHMENT
        }
    };
    for (size_t i = 0; i < array_length(data_texs); ++i) {
        glGenTextures(1, data_texs[i].id);
        GLenum target = gb->multisample ? GL_TEXTURE_2D_MULTISAMPLE : GL_TEXTURE_2D;
        glBindTexture(target, *(data_texs[i].id));
        if (gb->multisample) {
            glTexImage2DMultisample(target, 4, data_texs[i].ifmt, width, height, GL_FALSE);
        } else {
            glTexImage2D(target, 0,
                         data_texs[i].ifmt,
                         width, height, 0,
                         data_texs[i].fmt,
                         data_texs[i].pix_dtype, 0);
            glTexParameteri(target, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(target, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        }
        glFramebufferTexture2D(GL_FRAMEBUFFER, data_texs[i].attachment, target, *(data_texs[i].id), 0);
    }
    assert(glCheckFramebufferStatus(GL_FRAMEBUFFER) == GL_FRAMEBUFFER_COMPLETE);

    /* Unbind stuff */
    glBindTexture(GL_TEXTURE_2D, 0);
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
}

void gbuffer_bind_for_geometry_pass(struct gbuffer* gb)
{
    glBindFramebuffer(GL_FRAMEBUFFER, gb->fbo);
    GLuint attachments[] = {
        GL_COLOR_ATTACHMENT1,
        GL_COLOR_ATTACHMENT2,
    };
    glDrawBuffers(array_length(attachments), attachments);
}

void gbuffer_bind_for_light_pass(struct gbuffer* gb)
{
#ifdef WITH_ACCUM_BUF
    glBindFramebuffer(GL_FRAMEBUFFER, gb->fbo);
    glDrawBuffer(GL_COLOR_ATTACHMENT0);
#endif

    /* Bind geometry pass textures */
    GLuint geom_tex[] = {
        gb->depth_stencil_buf,
        gb->normal_buf,
        gb->albedo_buf,
    };
    for (unsigned int i = 0; i < array_length(geom_tex); ++i) {
        glActiveTexture(GL_TEXTURE0 + i);
        GLenum target = gb->multisample ? GL_TEXTURE_2D_MULTISAMPLE : GL_TEXTURE_2D;
        glBindTexture(target, geom_tex[i]);
    }
}

#ifdef WITH_ACCUM_BUF
void gbuffer_blit_accum_to_fb(struct gbuffer* gb, unsigned int fb)
{
    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, fb);
    glBindFramebuffer(GL_READ_FRAMEBUFFER, gb->fbo);
    glBlitFramebuffer(
        0, 0, gb->width, gb->height,
        0, 0, gb->width, gb->height,
        GL_COLOR_BUFFER_BIT,
        GL_NEAREST
    );
    glBindFramebuffer(GL_FRAMEBUFFER, fb);
}
#endif

void gbuffer_blit_depth_to_fb(struct gbuffer* gb, unsigned int fb)
{
    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, fb);
    glBindFramebuffer(GL_READ_FRAMEBUFFER, gb->fbo);
    glBlitFramebuffer(
        0, 0, gb->width, gb->height,
        0, 0, gb->width, gb->height,
        GL_DEPTH_BUFFER_BIT,
        GL_NEAREST
    );
    glBindFramebuffer(GL_FRAMEBUFFER, fb);
}

void gbuffer_destroy(struct gbuffer* gb)
{
    GLuint textures[] = { gb->normal_buf, gb->albedo_buf, gb->depth_stencil_buf };
    glDeleteTextures(array_length(textures), textures);
    glDeleteFramebuffers(1, &gb->fbo);
}