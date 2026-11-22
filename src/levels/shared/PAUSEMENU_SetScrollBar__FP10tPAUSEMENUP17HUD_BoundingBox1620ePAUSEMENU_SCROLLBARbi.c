/* PAUSEMENU_SetScrollBar__FP10tPAUSEMENUP17HUD_BoundingBox1620ePAUSEMENU_SCROLLBARbi -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B9FC8.c.
 */

extern int PAUSEMENU_SetScrollBar__FP10tPAUSEMENUssss20ePAUSEMENU_SCROLLBARbi(char *record, short left, short top, short right, short bottom, int value, int mode, int size);

int PAUSEMENU_SetScrollBar__FP10tPAUSEMENUP17HUD_BoundingBox1620ePAUSEMENU_SCROLLBARbi(char *record, short *fields, int value, int mode, int size)
{
    PAUSEMENU_SetScrollBar__FP10tPAUSEMENUssss20ePAUSEMENU_SCROLLBARbi(record, fields[0], fields[2], fields[4], fields[6], value, mode, size);
    return 1;
}
