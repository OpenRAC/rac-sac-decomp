/* GetEnemyStateMachine__19CactusPirateContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x24.
 */

typedef struct State {
    char pad[0x24];
    int field[1];
} State;

int *GetEnemyStateMachine__19CactusPirateContent(State *self)
{
    return self->field;
}
