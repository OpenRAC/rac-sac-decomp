/* HUD_FontPrintWindowInitAutoScroll__FP20tFontPrintWindowData -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tFontPrintWindowData tFontPrintWindowData;

struct tFontPrintWindowData {
    unsigned char reserved[0x3C];
    int field3C;
    int field40;
    unsigned char reserved44[4];
    unsigned char field48;
    unsigned char field49;
};

void HUD_FontPrintWindowInitAutoScroll__FP20tFontPrintWindowData(tFontPrintWindowData *data)
{
    data->field48 = 1;
    data->field49 = 0;
    data->field3C = 0x3C;
    data->field40 = 0x1E;
}
