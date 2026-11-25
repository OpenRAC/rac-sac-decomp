/* GetEnemyStateMachine__30Level05CasinoControllerContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x70.
 */

typedef struct State {
    char pad[0x70];
    int field[1];
} State;

int *GetEnemyStateMachine__30Level05CasinoControllerContent(State *self)
{
    return self->field;
}
