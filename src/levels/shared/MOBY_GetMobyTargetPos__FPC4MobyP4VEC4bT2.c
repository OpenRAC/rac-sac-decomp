/* MOBY_GetMobyTargetPos__FPC4MobyP4VEC4bT2 -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Computes the target position of the Moby into a VEC4: the three coordinates
 * are produced by the VEC3 variant of MOBY_GetMobyTargetPos and the fourth
 * component (offset 0xC) is set to 1.0f. The retail name has four arguments
 * (Moby*, VEC4*, bool, T2), but only the first two are initialised, so the
 * last two are unused.
 */

typedef struct Moby Moby;
typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;
typedef struct VEC4 {
    float x;
    float y;
    float z;
    float w;
} VEC4;

extern void MOBY_GetMobyTargetPos__FPC4MobyPC4VEC3bT2(Moby *moby, VEC3 *pos,
                                                     int flag);

void MOBY_GetMobyTargetPos__FPC4MobyP4VEC4bT2(Moby *moby, VEC4 *out, int flag)
{
    MOBY_GetMobyTargetPos__FPC4MobyPC4VEC3bT2(moby, (VEC3 *)out, flag);
    out->w = 1.0f;
}
