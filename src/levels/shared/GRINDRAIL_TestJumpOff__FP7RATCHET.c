/* GRINDRAIL_TestJumpOff__FP7RATCHET -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0xD58 is non-zero.
 */

typedef struct State {
    char pad[0xD58];
    int field;
} State;

int GRINDRAIL_TestJumpOff__FP7RATCHET(State *self)
{
    return self->field != 0;
}
