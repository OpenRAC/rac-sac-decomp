/* SludgeArmor_SpawnFlung__FPC4VEC3b -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies a vector into a local record with two fixed floats and a selected
 * pointer, then calls a helper.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1D7260.c.
 */

struct Rec1D7260 {
    float v[3];
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    char *p_1C;
};

extern int D_L03_00297514;
extern int D_L03_00297510;
extern char D_L03_002D8E50[];
extern char D_L03_002D8E28[];
int FlingyGoo_EmitParticles__FiiPC30FlingyGoo_SphereSectionEmitteriff(int a, int b, struct Rec1D7260 *c, int d, float e, float f);

void SludgeArmor_SpawnFlung__FPC4VEC3b(float *src, int flag)
{
    struct Rec1D7260 r;
    float k;
    float z;

    r.v[0] = src[0];
    r.v[1] = src[1];
    r.v[2] = src[2];
    if (flag != 0) {
        r.p_1C = D_L03_002D8E50;
    } else {
        r.p_1C = D_L03_002D8E28;
    }
    r.f_18 = 0.0f;
    k = 0.2f;
    r.f_0C = 0.1f;
    r.f_10 = k;
    r.f_14 = k;
    z = r.f_18;
    FlingyGoo_EmitParticles__FiiPC30FlingyGoo_SphereSectionEmitteriff(D_L03_00297514, D_L03_00297510, &r, 1, z, z);
}
