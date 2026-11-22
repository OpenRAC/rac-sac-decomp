/* PAUSEMENU_HideAllCustomCursors__FP10tPAUSEMENU -- 124 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B9A98.c.
 */

extern int HUD_SetWidgetVisibility__FUib(unsigned int index, int enable);

void PAUSEMENU_HideAllCustomCursors__FP10tPAUSEMENU(int *list)
{
    unsigned int index;
    for (index = 0; index < (unsigned int)list[1]; index++) {
        int *entry = *(int **)(*list + index * 4);
        unsigned int key = *(unsigned int *)((char *)entry + 200);
        if (key != 0xffffffffU)
            HUD_SetWidgetVisibility__FUib(key, 0);
    }
}
