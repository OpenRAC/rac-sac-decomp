/* GetEnemyStateMachine__12DroneContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0xFC.
 */

typedef struct State {
    char pad[0xFC];
    int field[1];
} State;

int *GetEnemyStateMachine__12DroneContent(State *self)
{
    return self->field;
}
