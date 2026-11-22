/* PlayerChange_Update__FP4Mobyf -- 160 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Dispatches an object to its per-state handler by the state byte (0, 4, 5, 1,
 * 2, 3).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_1AEB48.c.
 */

struct Obj {
    char pad00[0x45];
    unsigned char b45;
};

extern void func_L11_10B118(struct Obj *o);
extern void func_L11_10B1E0(struct Obj *o);
extern void func_L11_10B320(struct Obj *o);
extern void func_L11_10B368(struct Obj *o);
extern void func_L11_10B468(struct Obj *o);
extern void func_L11_10B4E0(struct Obj *o);

void PlayerChange_Update__FP4Mobyf(struct Obj *o)
{
    if (o->b45 == 0) {
        func_L11_10B118(o);
    } else if (o->b45 == 4) {
        func_L11_10B1E0(o);
    } else if (o->b45 == 5) {
        func_L11_10B320(o);
    } else if (o->b45 == 1) {
        func_L11_10B368(o);
    } else if (o->b45 == 2) {
        func_L11_10B468(o);
    } else if (o->b45 == 3) {
        func_L11_10B4E0(o);
    }
}
