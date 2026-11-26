/* GetEnemyStateMachine__16Lvl01TankContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x20.
 */

typedef struct State {
    char pad[0x20];
    int field[1];
} State;

int *GetEnemyStateMachine__16Lvl01TankContent(State *self)
{
    return self->field;
}
