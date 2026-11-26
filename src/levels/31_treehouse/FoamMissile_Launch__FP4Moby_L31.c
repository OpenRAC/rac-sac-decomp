/* FoamMissile_Launch__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one word and stores 1 in a lower byte.
 */

typedef struct State {
    char pad[0x45];
    unsigned char flag;
    char gap[0x2A];
    int field;
} State;

void FoamMissile_Launch__FP4Moby(State *self)
{
    self->field = 0;
    self->flag = 1;
}
