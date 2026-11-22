/* GU_ClampToFloor__FP4VEC3fPfb -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/16_multiplayer_01/LEVEL_16_013A40.c.
 */

/* LEVEL_16.REL:013A40 -- reads one value through the level's sampler into a
   local and stores it in the record and in the optional out pointer. */
extern int GU_IsOnFloor__FPC4VEC3fPfbii(void *a0, float *out, void *a2, int a3, int a4);

int GU_ClampToFloor__FP4VEC3fPfb(void *a0, void *a1, void *a2, float f)
{
    float v;
    int r;

    r = GU_IsOnFloor__FPC4VEC3fPfbii(a0, &v, a2, 0x38, 0);
    if (r) {
        *(float *)((char *)a0 + 4) = v;
    }
    if (a1 != 0) {
        *(float *)a1 = v;
    }
    return r;
}
