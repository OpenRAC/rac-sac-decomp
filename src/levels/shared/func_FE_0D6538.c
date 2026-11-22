/* func_FE_0D6538 -- 124 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies a 8, 16 or 4 byte block between two records looked up by mode.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_024958.c.
 */

extern void *func_FE_0D64B0(int, void *, int);
extern void *memcpy(void *, const void *, unsigned int);

void *func_FE_0D6538(int mode, void *first, void *second)
{
    void *source = func_FE_0D64B0(mode, first, 0);
    void *target = func_FE_0D64B0(mode, second, 0);
    int length;
    if (mode >= 31) {
        if (mode < 64) length = 4;
        else length = 8;
    } else length = 16;
    return memcpy(target, source, length);
}
