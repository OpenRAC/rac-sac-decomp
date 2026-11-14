/* HUD_FontPrintWindowResumeAutoScroll__FP20tFontPrintWindowData -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tFontPrintWindowData tFontPrintWindowData;

struct tFontPrintWindowData
{
    char pad_00[0x51];
    unsigned char field51;
};

void HUD_FontPrintWindowResumeAutoScroll__FP20tFontPrintWindowData(tFontPrintWindowData *self)
{
    self->field51 = 0;
}
