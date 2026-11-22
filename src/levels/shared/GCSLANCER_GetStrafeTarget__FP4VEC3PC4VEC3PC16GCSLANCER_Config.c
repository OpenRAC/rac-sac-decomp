/* GCSLANCER_GetStrafeTarget__FP4VEC3PC4VEC3PC16GCSLANCER_Config -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Takes three floats from a helper into a local vector, shifts two of them by
 * the object spacing, asks for a third, then hands the vector to another
 * helper.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_10B220.c.
 */

typedef struct {
    char pad[0x50];
    float f50;
    float f54;
    float f58;
} R;

extern int D_L24_003A3078;

extern void VEC_MulInvertMat4x3Vec3__FP4VEC3PC8MATRIX43PC4VEC319HintOrthonormalEnum(float *out, int *g, void *p, int zero);
extern float GCSHIP_GetPlaneDistance__Fv(void);
extern void VEC_MulMat4Vec3__FP4VEC3PC8MATRIX43PC4VEC3(void *a0, int *g, float *v);

void GCSLANCER_GetStrafeTarget__FP4VEC3PC4VEC3PC16GCSLANCER_Config(void *a0, void *a1, R *a2)
{
    float v[3];

    VEC_MulInvertMat4x3Vec3__FP4VEC3PC8MATRIX43PC4VEC319HintOrthonormalEnum(v, &D_L24_003A3078, a1, 0);
    v[0] = v[0] * a2->f50 + a2->f54;
    v[1] = v[1] * a2->f50 + a2->f58;
    v[2] = GCSHIP_GetPlaneDistance__Fv();
    VEC_MulMat4Vec3__FP4VEC3PC8MATRIX43PC4VEC3(a0, &D_L24_003A3078, v);
}
