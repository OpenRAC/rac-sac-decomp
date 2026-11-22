/* BlasterAkimbo_GetFirePos__FP4MobyP4VEC3 -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the three floats of the record's tail vector into the caller's
 * vector.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_07_1DBE00.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad[0x30];
    V3 v;
} Src;

void BlasterAkimbo_GetFirePos__FP4MobyP4VEC3(Src *a0, V3 *a1)
{
    V3 *s = &a0->v;
    a1->x = s->x;
    a1->y = s->y;
    a1->z = s->z;
}
