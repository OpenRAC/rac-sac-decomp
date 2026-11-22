/* FADEOVERLAYOBJ_Refresh__FP12tFADEOVERLAYUiUcUcUcb -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Fills the colour/light packet.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_00AC18.c.
 */

struct Obj {
    unsigned int f00;
    unsigned char f04;
    unsigned char f05;
    char pad06[6];
    unsigned int f0C;
    unsigned int f10;
    unsigned char f14;
};

void FADEOVERLAYOBJ_Refresh__FP12tFADEOVERLAYUiUcUcUcb(struct Obj *obj, unsigned int packed, unsigned char alpha,
                 unsigned char sub, unsigned char mode, unsigned char extra)
{
    unsigned char one = 1;

    obj->f14 = extra;
    obj->f10 = mode;
    obj->f00 = packed >> 24;
    obj->f0C = packed;
    obj->f04 = alpha != 0 ? alpha : one;
    obj->f05 = sub != 0 ? sub : one;
}
