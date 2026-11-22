/* BlasterShared_DrawLight__FP16BlasterLightVars -- 112 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_12C748.c.
 */

typedef struct {
    int f00;
    int f04;
    float f08;
    float f0C;
    int f10;
} S;

extern void LIGHT_DynamicPointLight__FPC4VEC3Uif(void *, int, float);

void BlasterShared_DrawLight__FP16BlasterLightVars(S *s)
{
    float f0;
    float f2;
    if (0.009999999776482582f < s->f0C) {
        LIGHT_DynamicPointLight__FPC4VEC3Uif((void *)&s->f10, s->f04, s->f0C);
        f0 = s->f0C - s->f08;
        f2 = 0.0f;
        s->f0C = f0;
        if (f0 < f2)
            s->f0C = f2;
    }
}
