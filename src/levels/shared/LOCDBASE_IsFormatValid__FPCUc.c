/* LOCDBASE_IsFormatValid__FPCUc -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Checks the tag of a formatted object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01F880.c.
 */

extern char D_FE_00126B98[];

extern int strncmp(const char *, const char *, unsigned int);

int LOCDBASE_IsFormatValid__FPCUc(void *p)
{
    int match = (strncmp(p, D_FE_00126B98, 8) == 0);
    int tag = (int)((*(unsigned int *)((char *)p + 8) >> 8) ^ 0x120601);

    if (tag != 0)
        match = 0;
    return match;
}
