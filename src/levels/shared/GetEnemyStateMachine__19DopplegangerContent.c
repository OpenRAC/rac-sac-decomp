/* GetEnemyStateMachine__19DopplegangerContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0xDC.
 */

typedef struct State {
    char pad[0xDC];
    int field[1];
} State;

int *GetEnemyStateMachine__19DopplegangerContent(State *self)
{
    return self->field;
}
