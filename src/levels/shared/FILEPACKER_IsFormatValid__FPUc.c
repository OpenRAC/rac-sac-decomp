/* FILEPACKER_IsFormatValid__FPUc -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Checks the tag of a formatted object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01F150.c.
 */

extern char D_FE_00126780[];

int strncmp(const char *, const char *, unsigned int);

int FILEPACKER_IsFormatValid__FPUc(void *p)
{
    int match = (strncmp(p, D_FE_00126780, 4) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 4) >> 8) ^ 0x110600);

    if (tag != 0)
        match = 0;
    return match;
}
