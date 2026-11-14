/* FADEOVERLAYOBJ_HideNow__FP12tFADEOVERLAY -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tFADEOVERLAY {
    int pad0;
    int pad4;
    int f8;
    int padC;
    int f10;
} tFADEOVERLAY;

void FADEOVERLAYOBJ_HideNow__FP12tFADEOVERLAY(tFADEOVERLAY *self)
{
    /* f8 then f10: Haifa emits last-use first, dbr puts f8 in the delay slot. */
    self->f8 = 0;
    self->f10 = 0;
}
