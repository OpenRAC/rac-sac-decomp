/* GCSASTEROID_GetVelocityCallback__FP4VEC3PC17GCSWORLD_Collider -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Writes a vector as a shared base vector plus the record's direction scaled
 * by its length.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0F9210.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} V3;

struct Rec {
    char pad0[0x24];
    float a[3];
    char pad30[0x10];
    float f40;
};

extern float D_L24_003A30FC[];

void GCSASTEROID_GetVelocityCallback__FP4VEC3PC17GCSWORLD_Collider(V3 *out, char *link)
{
    struct Rec *rec = *(struct Rec **)(link - 0x14);
    float *pa;
    float s;

    s = rec->f40;
    pa = rec->a;
    out->x = D_L24_003A30FC[0] + pa[0] * s;
    out->y = D_L24_003A30FC[1] + pa[1] * s;
    out->z = D_L24_003A30FC[2] + pa[2] * s;
}
