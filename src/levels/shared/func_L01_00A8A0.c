/* func_L01_00A8A0 -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the incoming values into the object's slots.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_001908.c.
 */

typedef struct {
    char pad[4];
    float f1;
    float f0;
    int i0;
    int i1;
} Obj;

void func_L01_00A8A0(Obj *o, float f0, float f1, int i0, int i1)
{
    o->f0 = f0;
    o->f1 = f1;
    o->i0 = i0;
    o->i1 = i1;
}
