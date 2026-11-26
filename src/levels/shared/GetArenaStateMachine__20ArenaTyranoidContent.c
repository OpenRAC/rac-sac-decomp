/* GetArenaStateMachine__20ArenaTyranoidContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x84.
 */

typedef struct State {
    char pad[0x84];
    int field[1];
} State;

int *GetArenaStateMachine__20ArenaTyranoidContent(State *self)
{
    return self->field;
}
