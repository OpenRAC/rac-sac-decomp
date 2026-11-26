/* GetEnemyStateMachine__22JackOfAllTradesContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x10C.
 */

typedef struct State {
    char pad[0x10C];
    int field[1];
} State;

int *GetEnemyStateMachine__22JackOfAllTradesContent(State *self)
{
    return self->field;
}
