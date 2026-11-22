/* Wrench_GetSwingDir__FP4MobyP4VEC3 -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies three floats out of a sub-object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_02_1DCF40.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad[0x58];
    void *p;
} Obj;

void Wrench_GetSwingDir__FP4MobyP4VEC3(Obj *a0, V3 *a1)
{
    float *s = (float *)a0->p + 0x34;

    a1->x = s[0];
    a1->y = s[1];
    a1->z = s[2];
}
