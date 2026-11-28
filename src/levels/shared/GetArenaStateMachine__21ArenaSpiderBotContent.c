/* GetArenaStateMachine__21ArenaSpiderBotContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x128.
 */

typedef struct State {
    char pad[0x128];
    int field[1];
} State;

int *GetArenaStateMachine__21ArenaSpiderBotContent(State *self)
{
    return self->field;
}
