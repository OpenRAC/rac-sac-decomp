/* DanceSniper_Disable__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets bits in the word at offset 0x64.
 */

typedef struct State {
    char pad[0x64];
    unsigned field;
} State;

void DanceSniper_Disable__FP4Moby(State *self)
{
    self->field |= 16;
}
