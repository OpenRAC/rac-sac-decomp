/* OmniKeyController_IsGameOver__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Compares the value at offset 0x46.
 */

typedef struct State {
    char pad[0x46];
    unsigned char field;
} State;

int OmniKeyController_IsGameOver__FP4Moby(State *self)
{
    return (unsigned)(self->field - 3) < 2u;
}
