/* CLANK_IsDisguised__FP6PLAYER -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns selected bits of the signed word at offset 0x268.
 */

typedef struct State {
    char pad[0x268];
    int field;
} State;

int CLANK_IsDisguised__FP6PLAYER(State *self)
{
    return (self->field >> 1) & 1;
}
