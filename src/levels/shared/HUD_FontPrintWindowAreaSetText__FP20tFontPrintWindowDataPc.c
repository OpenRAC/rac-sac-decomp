/* HUD_FontPrintWindowAreaSetText__FP20tFontPrintWindowDataPc -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tFontPrintWindowData {
    unsigned int reserved_00;
    unsigned int reserved_04;
    unsigned int reserved_08;
    unsigned int reserved_0C;
    unsigned int reserved_10;
    const char *text; /* +0x14 */
} tFontPrintWindowData;

void HUD_FontPrintWindowAreaSetText__FP20tFontPrintWindowDataPc(
    tFontPrintWindowData *self, const char *text)
{
    self->text = text;
}
