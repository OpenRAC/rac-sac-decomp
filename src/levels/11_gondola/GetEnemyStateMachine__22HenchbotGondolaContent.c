/* GetEnemyStateMachine__22HenchbotGondolaContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x2C.
 */

typedef struct State {
    char pad[0x2C];
    int field[1];
} State;

int *GetEnemyStateMachine__22HenchbotGondolaContent(State *self)
{
    return self->field;
}
