//
// deferred.glsl
//
#extension GL_ARB_sample_shading : enable
#include "encoding.glsl"
#include "packing.glsl"

struct gbuffer {
    sampler2D normal;
    sampler2D albedo;
    sampler2D depth;
    sampler2D roughness_metallic;
};
uniform gbuffer gbuf;
uniform vec2 u_screen;
uniform mat4 u_inv_view_proj;

// Data extracted from gbuffer
struct {
    vec3 ws_pos;
    vec3 normal;
    vec3 albedo;
    float roughness;
    float metallic;
} d;

vec3 reconstruct_wpos_from_depth()
{
    vec2 st = gl_FragCoord.xy / u_screen;
    float z = texelFetch(gbuf.depth, ivec2(gl_FragCoord.xy), 0).r;
    z = z * 2.0 - 1.0;
    vec4 spos = vec4(st * 2.0 - 1.0, z, 1.0);
    spos = u_inv_view_proj * spos;
    return spos.xyz / spos.w;
}

void fetch_gbuffer_data()
{
    ivec2 st = ivec2(gl_FragCoord.xy);
    d.ws_pos = reconstruct_wpos_from_depth();
    vec2 pckd_nm = texelFetch(gbuf.normal, st, 0).rg;
    vec3 albedo  = texelFetch(gbuf.albedo, st, 0).rgb;
    vec2 rgh_met = texelFetch(gbuf.roughness_metallic, st, 0).rg;
    d.normal    = unpack_normal_octahedron(pckd_nm);
    d.albedo    = albedo;
    d.roughness = rgh_met.r;
    d.metallic  = rgh_met.g;
}