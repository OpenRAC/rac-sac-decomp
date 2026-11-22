/* Navigate_GoToPoint__FP8NavigateP4MobyPC14NavigateParamsUif -- 168 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scales a local vector before dispatch.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_02FE68.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

static inline void copy_vec3(Vec3 *dst, const Vec3 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

extern void Navigate_CalcSpeed__FP8NavigatePC4VEC3PC14NavigateParamsUi(void *out, float *state, float *other,
                         unsigned long flags);
extern int Navigate_GoToPoint__FP8NavigateP4MobyPC4VEC3PC14NavigateParamsUif(void *out, void *actor, Vec3 *offset,
                        float *other, unsigned long flags, float amount);

int Navigate_GoToPoint__FP8NavigateP4MobyPC14NavigateParamsUif(float amount, char *out, char *actor, float *other,
                 unsigned long flags)
{
    Vec3 offset;
    float scale;

    Navigate_CalcSpeed__FP8NavigatePC4VEC3PC14NavigateParamsUi(out, (float *)(actor + 0x30), other, flags);
    copy_vec3(&offset, (const Vec3 *)(actor + 0x20));
    scale = *(float *)(out + 0x1C);
    offset.x *= scale;
    offset.y *= scale;
    offset.z *= scale;
    return Navigate_GoToPoint__FP8NavigateP4MobyPC4VEC3PC14NavigateParamsUif(out, actor, &offset, other, flags, amount);
}
