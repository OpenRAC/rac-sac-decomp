/* func_L01_00C528 -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls the slot setter when the value is at least the record's limit field,
 * forwarding all of its own arguments.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0035D0.c.
 */

typedef struct {
    char pad[0xC];
    int limit;
} Obj;

extern void func_L01_00A8A0(Obj *o, float f0, float f1, int i0, int i1);

void func_L01_00C528(Obj *o, float f0, float f1, int value, int i1)
{
    if (value >= o->limit)
        func_L01_00A8A0(o, f0, f1, value, i1);
}
