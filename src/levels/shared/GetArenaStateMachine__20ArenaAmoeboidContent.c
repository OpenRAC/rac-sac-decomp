/* GetArenaStateMachine__20ArenaAmoeboidContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0xA4.
 */

typedef struct State {
    char pad[0xA4];
    int field[1];
} State;

int *GetArenaStateMachine__20ArenaAmoeboidContent(State *self)
{
    return self->field;
}
