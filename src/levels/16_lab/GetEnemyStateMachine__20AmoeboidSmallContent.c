/* GetEnemyStateMachine__20AmoeboidSmallContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x9C.
 */

typedef struct State {
    char pad[0x9C];
    int field[1];
} State;

int *GetEnemyStateMachine__20AmoeboidSmallContent(State *self)
{
    return self->field;
}
