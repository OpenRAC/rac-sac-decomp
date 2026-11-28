/* QWARK_IsActive__FP6PLAYER -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word equals 2.
 */

typedef struct Inner {
    char pad[0x44];
    unsigned int field;
} Inner;

typedef struct State {
    char pad[0x574];
    Inner *inner;
} State;

int QWARK_IsActive__FP6PLAYER(State *self)
{
    return self->inner->field == 2;
}
