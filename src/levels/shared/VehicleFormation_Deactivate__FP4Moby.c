/* VehicleFormation_Deactivate__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one byte and sets bits in a word.
 */

typedef struct State {
    char pad[0x46];
    unsigned char flag;
    char gap[0x1D];
    unsigned int word;
} State;

void VehicleFormation_Deactivate__FP4Moby(State *self)
{
    self->flag = 0;
    self->word |= 16;
}
