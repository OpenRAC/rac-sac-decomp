/* HUD_DrawIcon__FUiP17HUD_BoundingBox16UiUiUiUif -- 236 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Reads four 16-bit fields of a record through the accessor helpers and
 * forwards them with unit scales and the remaining arguments to
 * HUD_DrawIcon__FUissUsUsffUiUiUiUif.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0AD3E0.c.
 */

extern int GetCenterX__17HUD_BoundingBox16(int *value);
extern int GetCenterY__17HUD_BoundingBox16(char *record);
extern int GetWidth__17HUD_BoundingBox16(int *param_1);
extern int GetHeight__17HUD_BoundingBox16(int *range);
extern void HUD_DrawIcon__FUissUsUsffUiUiUiUif(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void HUD_DrawIcon__FUiP17HUD_BoundingBox16UiUiUiUif(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = GetCenterX__17HUD_BoundingBox16(record);
    second = GetCenterY__17HUD_BoundingBox16((char *)record);
    third = GetWidth__17HUD_BoundingBox16(record);
    fourth = GetHeight__17HUD_BoundingBox16(record);
    HUD_DrawIcon__FUissUsUsffUiUiUiUif(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
