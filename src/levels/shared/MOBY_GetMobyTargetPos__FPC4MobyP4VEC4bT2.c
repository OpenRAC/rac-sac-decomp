/* MOBY_GetMobyTargetPos__FPC4MobyP4VEC4bT2 -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
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
