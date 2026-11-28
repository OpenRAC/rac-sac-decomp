/* GetEnemyStateMachine__23HenchbotCarnivalContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x58.
 */

typedef struct State {
    char pad[0x58];
    int field[1];
} State;

int *GetEnemyStateMachine__23HenchbotCarnivalContent(State *self)
{
    return self->field;
}
