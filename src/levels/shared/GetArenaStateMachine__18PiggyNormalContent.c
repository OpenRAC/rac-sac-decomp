/* GetArenaStateMachine__18PiggyNormalContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x74.
 */

typedef struct State {
    char pad[0x74];
    int field[1];
} State;

int *GetArenaStateMachine__18PiggyNormalContent(State *self)
{
    return self->field;
}
