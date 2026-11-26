/* SetupBombs__21Doppleganger_FireBombUif -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores one integer and one float.
 */

typedef struct State {
    char pad[0x18];
    int low;
    float high;
} State;

void SetupBombs__21Doppleganger_FireBombUif(State *self, int count, float amount)
{
    self->low = count;
    self->high = amount;
}
