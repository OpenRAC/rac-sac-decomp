/* Lvl04Gondola_IsOnCurve__FP4MobyPC5Curve -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the pointer matches the argument.
 */

typedef struct Inner {
    char pad[0x1C];
    void *ptr;
} Inner;

typedef struct State {
    char pad[0x58];
    Inner *inner;
} State;

int Lvl04Gondola_IsOnCurve__FP4MobyPC5Curve(State *self, void *other)
{
    return self->inner->ptr == other;
}
