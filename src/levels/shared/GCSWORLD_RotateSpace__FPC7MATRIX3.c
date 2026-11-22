/* GCSWORLD_RotateSpace__FPC7MATRIX3 -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs the slot helper on both global slots with the same argument.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_133138.c.
 */

typedef struct {
    char pad[0x30];
} Slot;

extern Slot D_L24_003A3078[2];
extern void VEC_CopyMat__FP7MATRIX3PC7MATRIX3(Slot *slot, void *arg);

void GCSWORLD_RotateSpace__FPC7MATRIX3(void *arg)
{
    Slot *slots = D_L24_003A3078;

    VEC_CopyMat__FP7MATRIX3PC7MATRIX3(&slots[0], arg);
    VEC_CopyMat__FP7MATRIX3PC7MATRIX3(&slots[1], arg);
}
