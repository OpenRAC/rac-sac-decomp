/* GetEnemyStateMachine__15WaitressContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x78.
 */

typedef struct State {
    char pad[0x78];
    int field[1];
} State;

int *GetEnemyStateMachine__15WaitressContent(State *self)
{
    return self->field;
}
