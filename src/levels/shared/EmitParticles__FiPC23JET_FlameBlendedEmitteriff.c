/* EmitParticles__FiPC23JET_FlameBlendedEmitteriff -- 276 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Interpolates a keyframe record by the owner's blend factor and forwards it.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/08_dayni_moon/LEVEL_08_22FCA0.c.
 */

struct Blend {
    int f0;
    int f4;
    float *key;
    float t;
};
extern int *PAR_GetSystemGroup__Fi(int index);
extern void func_L10_14DAF8(void *r, void *q, float u, float v, void *p, float *k, float a, float b, float c, float d, float e, float f,
                        float g, float h);

void EmitParticles__FiPC23JET_FlameBlendedEmitteriff(int unused, struct Blend *p, void *q, float u, float v)
{
    float *l;
    float t;
    int *r;
    float x0, x1, a, b, c, d, e, f;

    r = PAR_GetSystemGroup__Fi(unused);
    l = p->key;
    t = p->t;
    a = (l[11] - l[0]) * t + l[0];
    b = (l[18] - l[7]) * t + l[7];
    c = (l[12] - l[1]) * t + l[1];
    d = (l[19] - l[8]) * t + l[8];
    e = (l[14] - l[3]) * t + l[3];
    f = (l[20] - l[9]) * t + l[9];
    x0 = (l[16] - l[5]) * t + l[5];
    x1 = (l[21] - l[10]) * t + l[10];
    func_L10_14DAF8(r, q, u, v, p, l + 22, a, b, c, d, e, f, x0, x1);
}
