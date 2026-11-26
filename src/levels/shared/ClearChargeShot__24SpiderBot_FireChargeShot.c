/* ClearChargeShot__24SpiderBot_FireChargeShot -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the word at offset 0x20 of the state.
 */

typedef struct State {
    char pad[0x20];
    int field;
} State;

void ClearChargeShot__24SpiderBot_FireChargeShot(State *self)
{
    self->field = 0;
}
