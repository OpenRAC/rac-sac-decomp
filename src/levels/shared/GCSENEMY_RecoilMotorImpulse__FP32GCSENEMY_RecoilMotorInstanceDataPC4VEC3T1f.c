/* GCSENEMY_RecoilMotorImpulse__FP32GCSENEMY_RecoilMotorInstanceDataPC4VEC3T1f -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The speed of the target is scaled, then the two incoming vectors are copied
 * into the target block.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0FD978.c.
 */

typedef struct {
    float f[2];
    int flag;
} Vec12;

typedef struct {
    float f[2];
    float speed;
    Vec12 a;
    Vec12 b;
} Target;

void GCSENEMY_RecoilMotorImpulse__FP32GCSENEMY_RecoilMotorInstanceDataPC4VEC3T1f(Target *dst, Vec12 *a, Vec12 *b, float scale)
{
    dst->speed += scale * 30.0f;
    dst->a = *a;
    dst->b = *b;
}
