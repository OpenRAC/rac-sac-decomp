/* PAUSEMENU_SetCurrentBoxes__FP10tPAUSEMENUUiUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the two values into the object's fields at +0x70 and +0x6C and
 * returns 1.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_012758.c.
 */

typedef struct Obj {
    char pad_00[0x6C];
    int w6C;
    int w70;
} Obj;

int PAUSEMENU_SetCurrentBoxes__FP10tPAUSEMENUUiUi(Obj *o, int a, int b)
{
    o->w70 = a;
    o->w6C = b;
    return 1;
}
