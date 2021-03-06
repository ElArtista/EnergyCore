#ifndef _GOHU_FNT_H_
#define _GOHU_FNT_H_

/* gohufont-14.pcf */

const struct {
    unsigned int ascender;
    unsigned int descender;
    unsigned int height;
} gohu_font_metrics = { 0, 0, 14 };

const struct {
    char c;
    int width;
    int x, y;
    int w, h;
    int ox, oy;
} gohu_font_map[] = {
    {' ',  8, 0,   0, 8, 14, 0, 11},
    {'!',  8, 8,   0, 8, 14, 0, 11},
    {'"',  8, 16,  0, 8, 14, 0, 11},
    {'#',  8, 24,  0, 8, 14, 0, 11},
    {'$',  8, 32,  0, 8, 14, 0, 11},
    {'%',  8, 40,  0, 8, 14, 0, 11},
    {'&',  8, 48,  0, 8, 14, 0, 11},
    {'\'', 8, 56,  0, 8, 14, 0, 11},
    {'(',  8, 64,  0, 8, 14, 0, 11},
    {')',  8, 72,  0, 8, 14, 0, 11},
    {'*',  8, 80,  0, 8, 14, 0, 11},
    {'+',  8, 88,  0, 8, 14, 0, 11},
    {',',  8, 96,  0, 8, 14, 0, 11},
    {'-',  8, 104, 0, 8, 14, 0, 11},
    {'.',  8, 112, 0, 8, 14, 0, 11},
    {'/',  8, 120, 0, 8, 14, 0, 11},
    {'0',  8, 128, 0, 8, 14, 0, 11},
    {'1',  8, 136, 0, 8, 14, 0, 11},
    {'2',  8, 144, 0, 8, 14, 0, 11},
    {'3',  8, 152, 0, 8, 14, 0, 11},
    {'4',  8, 160, 0, 8, 14, 0, 11},
    {'5',  8, 168, 0, 8, 14, 0, 11},
    {'6',  8, 176, 0, 8, 14, 0, 11},
    {'7',  8, 184, 0, 8, 14, 0, 11},
    {'8',  8, 192, 0, 8, 14, 0, 11},
    {'9',  8, 200, 0, 8, 14, 0, 11},
    {':',  8, 208, 0, 8, 14, 0, 11},
    {';',  8, 216, 0, 8, 14, 0, 11},
    {'<',  8, 224, 0, 8, 14, 0, 11},
    {'=',  8, 232, 0, 8, 14, 0, 11},
    {'>',  8, 240, 0, 8, 14, 0, 11},
    {'?',  8, 248, 0, 8, 14, 0, 11},
    {'@',  8, 256, 0, 8, 14, 0, 11},
    {'A',  8, 264, 0, 8, 14, 0, 11},
    {'B',  8, 272, 0, 8, 14, 0, 11},
    {'C',  8, 280, 0, 8, 14, 0, 11},
    {'D',  8, 288, 0, 8, 14, 0, 11},
    {'E',  8, 296, 0, 8, 14, 0, 11},
    {'F',  8, 304, 0, 8, 14, 0, 11},
    {'G',  8, 312, 0, 8, 14, 0, 11},
    {'H',  8, 320, 0, 8, 14, 0, 11},
    {'I',  8, 328, 0, 8, 14, 0, 11},
    {'J',  8, 336, 0, 8, 14, 0, 11},
    {'K',  8, 344, 0, 8, 14, 0, 11},
    {'L',  8, 352, 0, 8, 14, 0, 11},
    {'M',  8, 360, 0, 8, 14, 0, 11},
    {'N',  8, 368, 0, 8, 14, 0, 11},
    {'O',  8, 376, 0, 8, 14, 0, 11},
    {'P',  8, 384, 0, 8, 14, 0, 11},
    {'Q',  8, 392, 0, 8, 14, 0, 11},
    {'R',  8, 400, 0, 8, 14, 0, 11},
    {'S',  8, 408, 0, 8, 14, 0, 11},
    {'T',  8, 416, 0, 8, 14, 0, 11},
    {'U',  8, 424, 0, 8, 14, 0, 11},
    {'V',  8, 432, 0, 8, 14, 0, 11},
    {'W',  8, 440, 0, 8, 14, 0, 11},
    {'X',  8, 448, 0, 8, 14, 0, 11},
    {'Y',  8, 456, 0, 8, 14, 0, 11},
    {'Z',  8, 464, 0, 8, 14, 0, 11},
    {'[',  8, 472, 0, 8, 14, 0, 11},
    {'\\', 8, 480, 0, 8, 14, 0, 11},
    {']',  8, 488, 0, 8, 14, 0, 11},
    {'^',  8, 496, 0, 8, 14, 0, 11},
    {'_',  8, 504, 0, 8, 14, 0, 11},
    {'`',  8, 512, 0, 8, 14, 0, 11},
    {'a',  8, 520, 0, 8, 14, 0, 11},
    {'b',  8, 528, 0, 8, 14, 0, 11},
    {'c',  8, 536, 0, 8, 14, 0, 11},
    {'d',  8, 544, 0, 8, 14, 0, 11},
    {'e',  8, 552, 0, 8, 14, 0, 11},
    {'f',  8, 560, 0, 8, 14, 0, 11},
    {'g',  8, 568, 0, 8, 14, 0, 11},
    {'h',  8, 576, 0, 8, 14, 0, 11},
    {'i',  8, 584, 0, 8, 14, 0, 11},
    {'j',  8, 592, 0, 8, 14, 0, 11},
    {'k',  8, 600, 0, 8, 14, 0, 11},
    {'l',  8, 608, 0, 8, 14, 0, 11},
    {'m',  8, 616, 0, 8, 14, 0, 11},
    {'n',  8, 624, 0, 8, 14, 0, 11},
    {'o',  8, 632, 0, 8, 14, 0, 11},
    {'p',  8, 640, 0, 8, 14, 0, 11},
    {'q',  8, 648, 0, 8, 14, 0, 11},
    {'r',  8, 656, 0, 8, 14, 0, 11},
    {'s',  8, 664, 0, 8, 14, 0, 11},
    {'t',  8, 672, 0, 8, 14, 0, 11},
    {'u',  8, 680, 0, 8, 14, 0, 11},
    {'v',  8, 688, 0, 8, 14, 0, 11},
    {'w',  8, 696, 0, 8, 14, 0, 11},
    {'x',  8, 704, 0, 8, 14, 0, 11},
    {'y',  8, 712, 0, 8, 14, 0, 11},
    {'z',  8, 720, 0, 8, 14, 0, 11},
    {'{',  8, 728, 0, 8, 14, 0, 11},
    {'|',  8, 736, 0, 8, 14, 0, 11},
    {'}',  8, 744, 0, 8, 14, 0, 11},
    {'~',  8, 752, 0, 8, 14, 0, 11},
};

const struct {
    unsigned int width;
    unsigned int height;
} gohu_font_atlas = { 760, 14 };

const unsigned char gohu_font_data_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x24, 0x14, 0x08, 0x00, 0x18, 0x08, 0x10, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3E, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x02,
  0x1C, 0x08, 0x00, 0x02, 0x00, 0x02, 0x00, 0x40, 0x00, 0x38, 0x00, 0x02,
  0x08, 0x10, 0x02, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x08, 0x0E, 0x00, 0x00, 0x08,
  0x24, 0x14, 0x3E, 0x26, 0x24, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x20, 0x3C, 0x10, 0x3C, 0x3C, 0x20, 0x7E, 0x3C, 0x7E, 0x3C, 0x3C,
  0x00, 0x00, 0x20, 0x00, 0x02, 0x42, 0x41, 0x3C, 0x3E, 0x3C, 0x1E, 0x7E,
  0x7E, 0x3C, 0x42, 0x1C, 0x40, 0x42, 0x02, 0x41, 0x42, 0x3C, 0x3E, 0x3C,
  0x3E, 0x3C, 0x7F, 0x42, 0x42, 0x41, 0x42, 0x41, 0x7E, 0x08, 0x04, 0x10,
  0x14, 0x00, 0x04, 0x00, 0x02, 0x00, 0x40, 0x00, 0x04, 0x00, 0x02, 0x08,
  0x10, 0x02, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x10, 0x00, 0x00, 0x08, 0x24,
  0x14, 0x49, 0x29, 0x24, 0x08, 0x04, 0x10, 0x08, 0x08, 0x00, 0x00, 0x00,
  0x20, 0x42, 0x18, 0x42, 0x42, 0x30, 0x02, 0x02, 0x40, 0x42, 0x42, 0x00,
  0x00, 0x10, 0x00, 0x04, 0x40, 0x79, 0x42, 0x42, 0x42, 0x22, 0x02, 0x02,
  0x42, 0x42, 0x08, 0x40, 0x22, 0x02, 0x63, 0x46, 0x42, 0x42, 0x42, 0x42,
  0x42, 0x08, 0x42, 0x42, 0x41, 0x42, 0x41, 0x40, 0x08, 0x04, 0x10, 0x22,
  0x00, 0x08, 0x00, 0x02, 0x00, 0x40, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00,
  0x02, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x10, 0x00, 0x00, 0x08, 0x00, 0x7F,
  0x09, 0x16, 0x18, 0x08, 0x04, 0x10, 0x49, 0x08, 0x00, 0x00, 0x00, 0x10,
  0x62, 0x14, 0x42, 0x40, 0x28, 0x02, 0x02, 0x20, 0x42, 0x42, 0x18, 0x0C,
  0x08, 0x7E, 0x08, 0x40, 0x45, 0x42, 0x42, 0x02, 0x42, 0x02, 0x02, 0x02,
  0x42, 0x08, 0x40, 0x12, 0x02, 0x55, 0x46, 0x42, 0x42, 0x42, 0x42, 0x02,
  0x08, 0x42, 0x42, 0x49, 0x24, 0x22, 0x20, 0x08, 0x08, 0x10, 0x00, 0x00,
  0x00, 0x3C, 0x3A, 0x3C, 0x7C, 0x3C, 0x04, 0x7C, 0x3A, 0x0E, 0x18, 0x02,
  0x08, 0x3F, 0x3E, 0x3C, 0x3A, 0x7C, 0x3A, 0x3C, 0x3C, 0x42, 0x42, 0x41,
  0x42, 0x42, 0x7E, 0x08, 0x08, 0x10, 0x00, 0x00, 0x08, 0x00, 0x14, 0x09,
  0x10, 0x0C, 0x00, 0x02, 0x20, 0x2A, 0x08, 0x00, 0x00, 0x00, 0x10, 0x52,
  0x12, 0x20, 0x40, 0x24, 0x3E, 0x3E, 0x20, 0x42, 0x42, 0x18, 0x0C, 0x04,
  0x00, 0x10, 0x20, 0x45, 0x42, 0x42, 0x02, 0x42, 0x02, 0x02, 0x02, 0x42,
  0x08, 0x40, 0x0A, 0x02, 0x49, 0x4A, 0x42, 0x42, 0x42, 0x42, 0x02, 0x08,
  0x42, 0x42, 0x49, 0x24, 0x22, 0x10, 0x08, 0x08, 0x10, 0x00, 0x00, 0x00,
  0x40, 0x46, 0x42, 0x42, 0x42, 0x3C, 0x42, 0x46, 0x08, 0x10, 0x22, 0x08,
  0x49, 0x42, 0x42, 0x46, 0x42, 0x46, 0x02, 0x08, 0x42, 0x42, 0x41, 0x42,
  0x42, 0x20, 0x08, 0x08, 0x10, 0x46, 0x00, 0x08, 0x00, 0x14, 0x3E, 0x08,
  0x52, 0x00, 0x02, 0x20, 0x1C, 0x7F, 0x00, 0x7E, 0x00, 0x08, 0x4A, 0x10,
  0x10, 0x38, 0x22, 0x40, 0x42, 0x10, 0x3C, 0x7C, 0x00, 0x00, 0x02, 0x00,
  0x20, 0x10, 0x45, 0x7E, 0x3E, 0x02, 0x42, 0x1E, 0x1E, 0x72, 0x7E, 0x08,
  0x40, 0x06, 0x02, 0x49, 0x4A, 0x42, 0x3E, 0x42, 0x3E, 0x3C, 0x08, 0x42,
  0x24, 0x49, 0x18, 0x14, 0x08, 0x08, 0x10, 0x10, 0x00, 0x00, 0x00, 0x7C,
  0x42, 0x02, 0x42, 0x42, 0x04, 0x42, 0x42, 0x08, 0x10, 0x12, 0x08, 0x49,
  0x42, 0x42, 0x42, 0x42, 0x02, 0x02, 0x08, 0x42, 0x42, 0x49, 0x24, 0x42,
  0x10, 0x08, 0x08, 0x10, 0x49, 0x00, 0x08, 0x00, 0x7F, 0x48, 0x08, 0x22,
  0x00, 0x02, 0x20, 0x2A, 0x08, 0x00, 0x00, 0x00, 0x08, 0x46, 0x10, 0x08,
  0x40, 0x7E, 0x40, 0x42, 0x10, 0x42, 0x40, 0x00, 0x00, 0x04, 0x00, 0x10,
  0x08, 0x65, 0x42, 0x42, 0x02, 0x42, 0x02, 0x02, 0x42, 0x42, 0x08, 0x40,
  0x0A, 0x02, 0x41, 0x52, 0x42, 0x02, 0x52, 0x12, 0x40, 0x08, 0x42, 0x24,
  0x55, 0x24, 0x08, 0x04, 0x08, 0x10, 0x10, 0x00, 0x00, 0x00, 0x42, 0x42,
  0x02, 0x42, 0x7E, 0x04, 0x42, 0x42, 0x08, 0x10, 0x0E, 0x08, 0x49, 0x42,
  0x42, 0x42, 0x42, 0x02, 0x3C, 0x08, 0x42, 0x24, 0x49, 0x18, 0x42, 0x08,
  0x07, 0x08, 0xE0, 0x31, 0x00, 0x00, 0x00, 0x14, 0x48, 0x04, 0x22, 0x00,
  0x02, 0x20, 0x49, 0x08, 0x00, 0x00, 0x00, 0x04, 0x42, 0x10, 0x04, 0x40,
  0x20, 0x40, 0x42, 0x08, 0x42, 0x40, 0x00, 0x00, 0x08, 0x7E, 0x08, 0x00,
  0x59, 0x42, 0x42, 0x02, 0x42, 0x02, 0x02, 0x42, 0x42, 0x08, 0x42, 0x12,
  0x02, 0x41, 0x52, 0x42, 0x02, 0x52, 0x22, 0x40, 0x08, 0x42, 0x24, 0x22,
  0x24, 0x08, 0x02, 0x08, 0x20, 0x10, 0x00, 0x00, 0x00, 0x42, 0x42, 0x02,
  0x42, 0x02, 0x04, 0x42, 0x42, 0x08, 0x10, 0x12, 0x08, 0x49, 0x42, 0x42,
  0x42, 0x42, 0x02, 0x40, 0x08, 0x42, 0x24, 0x55, 0x24, 0x42, 0x04, 0x08,
  0x08, 0x10, 0x00, 0x00, 0x08, 0x00, 0x14, 0x49, 0x34, 0x22, 0x00, 0x04,
  0x10, 0x08, 0x08, 0x0C, 0x00, 0x0C, 0x04, 0x42, 0x10, 0x02, 0x42, 0x20,
  0x42, 0x42, 0x08, 0x42, 0x20, 0x18, 0x0C, 0x10, 0x00, 0x04, 0x08, 0x01,
  0x42, 0x42, 0x42, 0x22, 0x02, 0x02, 0x42, 0x42, 0x08, 0x42, 0x22, 0x02,
  0x41, 0x62, 0x42, 0x02, 0x22, 0x42, 0x42, 0x08, 0x42, 0x18, 0x22, 0x42,
  0x08, 0x02, 0x08, 0x20, 0x10, 0x00, 0x00, 0x00, 0x62, 0x42, 0x42, 0x62,
  0x02, 0x04, 0x62, 0x42, 0x08, 0x10, 0x22, 0x08, 0x49, 0x42, 0x42, 0x42,
  0x62, 0x02, 0x40, 0x08, 0x62, 0x18, 0x22, 0x42, 0x62, 0x02, 0x08, 0x08,
  0x10, 0x00, 0x00, 0x08, 0x00, 0x14, 0x3E, 0x4A, 0x5C, 0x00, 0x04, 0x10,
  0x00, 0x00, 0x0C, 0x00, 0x0C, 0x02, 0x3C, 0x10, 0x7E, 0x3C, 0x20, 0x3C,
  0x3C, 0x08, 0x3C, 0x1C, 0x18, 0x0C, 0x20, 0x00, 0x02, 0x08, 0x7E, 0x42,
  0x3E, 0x3C, 0x1E, 0x7E, 0x02, 0x3C, 0x42, 0x1C, 0x3C, 0x42, 0x7E, 0x41,
  0x62, 0x3C, 0x02, 0x5C, 0x42, 0x3C, 0x08, 0x3C, 0x18, 0x22, 0x42, 0x08,
  0x7E, 0x08, 0x40, 0x10, 0x00, 0x00, 0x00, 0x5C, 0x3E, 0x3C, 0x5C, 0x7C,
  0x04, 0x5C, 0x42, 0x38, 0x10, 0x42, 0x70, 0x49, 0x42, 0x3C, 0x3E, 0x5C,
  0x02, 0x3E, 0x30, 0x5C, 0x18, 0x22, 0x42, 0x5C, 0x7E, 0x08, 0x08, 0x10,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x32, 0x00, 0x00, 0x08, 0x08, 0x00,
  0x00, 0x08, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x38, 0x40, 0x1C, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x08, 0x08, 0x10, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x70, 0x08, 0x0E, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00,
  0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00
};

#endif /* ! _GOHU_FNT_H_ */
