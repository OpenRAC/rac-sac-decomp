/* GCSBOMBER_EvadeStateCreate__FPv -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets the object's weight to 1.0 and transforms its position by the shared
 * matrix and the vector held in the linked record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1033E8.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} V3;

struct Obj {
    char pad0[0x50];
    V3 pos;
    float f5C;
    char pad60[0x1DC];
    char *f23C;
};

extern float D_L24_003A3078[];
extern void VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(V3 *out, float *m, V3 *v);

void GCSBOMBER_EvadeStateCreate__FPv(struct Obj *o)
{
    o->f5C = 1.0f;
    VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(&o->pos, D_L24_003A3078, (V3 *)(o->f23C + 0x60));
}
