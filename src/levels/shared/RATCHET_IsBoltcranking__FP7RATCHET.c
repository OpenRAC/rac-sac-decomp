/* RATCHET_IsBoltcranking__FP7RATCHET -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the halfword at offset 0xAB4 equals 20.
 */

typedef struct State {
    char pad[0xAB4];
    short field;
} State;

int RATCHET_IsBoltcranking__FP7RATCHET(State *self)
{
    return self->field == 20;
}
