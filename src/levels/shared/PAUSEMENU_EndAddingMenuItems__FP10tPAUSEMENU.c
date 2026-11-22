/* PAUSEMENU_EndAddingMenuItems__FP10tPAUSEMENU -- 180 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_0C0520.c.
 */

extern void func_FE_0358C0(unsigned char *p);

int PAUSEMENU_EndAddingMenuItems__FP10tPAUSEMENU(unsigned char *p)
{
    unsigned char *saved;
    unsigned int i;

    *(int *)(p + 0x30) = 2;
    saved = *(unsigned char **)(p + 0x2C);
    for (i = 0; i < *(unsigned int *)(p + 0x34); i++) {
        **(unsigned int **)(p + 0x2C) = *(int *)(p + 0x24) + i * 0xE4;
        *(unsigned char **)(p + 0x2C) += 4;
        if (*(unsigned char **)(p + 0x2C) > *(unsigned char **)(p + 0x28)) {
            *(unsigned char **)(p + 0x2C) = *(unsigned char **)(p + 0x28);
            return 0;
        }
    }
    **(unsigned int **)(p + 0x2C) = 0;
    *(unsigned char **)(p + 0x2C) += 4;
    if (*(unsigned char **)(p + 0x2C) > *(unsigned char **)(p + 0x28)) {
        *(unsigned char **)(p + 0x2C) = *(unsigned char **)(p + 0x28);
        return 0;
    }
    *(unsigned char **)(p + 0) = saved;
    *(int *)(p + 4) = *(int *)(p + 0x34);
    func_FE_0358C0(p);
    return 1;
}
