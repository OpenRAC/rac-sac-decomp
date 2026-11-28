/* ANIM_ResetCursorCache__FP13ANIM_Instance -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the constant 255 in the byte at offset 0x1D.
 */

typedef struct State {
    char pad[0x1D];
    unsigned char field;
} State;

void ANIM_ResetCursorCache__FP13ANIM_Instance(State *self)
{
    self->field = 255;
}
