/* GetArenaStateMachine__25ArenaAmoeboidSmallContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x50.
 */

typedef struct State {
    char pad[0x50];
    int field[1];
} State;

int *GetArenaStateMachine__25ArenaAmoeboidSmallContent(State *self)
{
    return self->field;
}
