/* InitRevealed__24Doppleganger_GetHitMinorb -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument as a byte at offset 0x14.
 */

typedef struct State {
    char pad[0x14];
    unsigned char field;
} State;

void InitRevealed__24Doppleganger_GetHitMinorb(State *self, int value)
{
    self->field = value;
}
