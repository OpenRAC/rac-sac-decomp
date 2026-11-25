/* GetEnemyStateMachine__19KlunkKingpinContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x44.
 */

typedef struct State {
    char pad[0x44];
    int field[1];
} State;

int *GetEnemyStateMachine__19KlunkKingpinContent(State *self)
{
    return self->field;
}
