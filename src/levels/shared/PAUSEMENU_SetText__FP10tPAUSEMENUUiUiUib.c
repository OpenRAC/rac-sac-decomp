/* PAUSEMENU_SetText__FP10tPAUSEMENUUiUiUib -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_0122E8.c.
 */

typedef struct {
    int **base;
    unsigned int count;
} Set;

/* The fifth argument is passed in $t0 by the MIPS ABI of this toolchain. */
int PAUSEMENU_SetText__FP10tPAUSEMENUUiUiUib(Set *set, unsigned int i, int stride, int value, int flag)
{
    int off;

    if (i >= set->count)
        return 0;
    off = stride * 0x30;
    *(int *)((char *)set->base[i] + off) = value;
    ((char *)set->base[i] + off)[0xC] = (char)flag;
    return 1;
}
