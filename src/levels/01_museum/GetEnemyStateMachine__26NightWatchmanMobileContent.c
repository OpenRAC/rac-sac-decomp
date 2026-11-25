/* GetEnemyStateMachine__26NightWatchmanMobileContent -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x94.
 */

typedef struct State {
    char pad[0x94];
    int field[1];
} State;

int *GetEnemyStateMachine__26NightWatchmanMobileContent(State *self)
{
    return self->field;
}
