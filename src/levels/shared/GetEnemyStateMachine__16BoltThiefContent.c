/* GetEnemyStateMachine__16BoltThiefContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0xD0.
 */

typedef struct State {
    char pad[0xD0];
    int field[1];
} State;

int *GetEnemyStateMachine__16BoltThiefContent(State *self)
{
    return self->field;
}
