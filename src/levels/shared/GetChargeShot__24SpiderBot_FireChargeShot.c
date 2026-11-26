/* GetChargeShot__24SpiderBot_FireChargeShot -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x20.
 */

typedef struct State {
    char pad[0x20];
    int field;
} State;

int GetChargeShot__24SpiderBot_FireChargeShot(State *self)
{
    return self->field;
}
