/* GetEnemyStateMachine__19HenchbotJackContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x90.
 */

typedef struct State {
    char pad[0x90];
    int field[1];
} State;

int *GetEnemyStateMachine__19HenchbotJackContent(State *self)
{
    return self->field;
}
