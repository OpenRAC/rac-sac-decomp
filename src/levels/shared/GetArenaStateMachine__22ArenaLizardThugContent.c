/* GetArenaStateMachine__22ArenaLizardThugContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0xA8.
 */

typedef struct State {
    char pad[0xA8];
    int field[1];
} State;

int *GetArenaStateMachine__22ArenaLizardThugContent(State *self)
{
    return self->field;
}
