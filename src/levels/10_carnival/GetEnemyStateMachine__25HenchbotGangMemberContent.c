/* GetEnemyStateMachine__25HenchbotGangMemberContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x8.
 */

typedef struct State {
    char pad[0x8];
    int field[1];
} State;

int *GetEnemyStateMachine__25HenchbotGangMemberContent(State *self)
{
    return self->field;
}
