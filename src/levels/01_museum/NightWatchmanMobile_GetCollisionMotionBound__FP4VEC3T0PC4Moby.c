/* NightWatchmanMobile_GetCollisionMotionBound__FP4VEC3T0PC4Moby -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards its three arguments to the helper together with the third's link
 * word and a zero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/07_dreamtime/LEVEL_07_173500.c.
 */

typedef struct {
    char pad_00[0x54];
    int link;
} Obj;

extern void Navigate_GetCollisionMotionBound__FP4VEC3T0PC4MobyPC8NavigatePC5Curve(int a, int b, Obj *c, int d, int e);

void NightWatchmanMobile_GetCollisionMotionBound__FP4VEC3T0PC4Moby(int a, int b, Obj *c)
{
    Navigate_GetCollisionMotionBound__FP4VEC3T0PC4MobyPC8NavigatePC5Curve(a, b, c, c->link, 0);
}
