/* ButtonWallMounted_WasPressed__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word equals 1.
 */

typedef struct Inner {
    unsigned int field;
} Inner;

typedef struct State {
    char pad[0x58];
    Inner *inner;
} State;

int ButtonWallMounted_WasPressed__FP4Moby(State *self)
{
    return self->inner->field == 1;
}
