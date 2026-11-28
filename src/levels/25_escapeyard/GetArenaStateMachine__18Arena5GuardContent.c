/* GetArenaStateMachine__18Arena5GuardContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x48.
 */

typedef struct State {
    char pad[0x48];
    int field[1];
} State;

int *GetArenaStateMachine__18Arena5GuardContent(State *self)
{
    return self->field;
}
