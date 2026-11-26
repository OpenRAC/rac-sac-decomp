/* AdditiveFinalize__19ApeAnimChannelFloatPf -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the constant 1 in the byte at offset 0xC.
 */

typedef struct State {
    char pad[0xC];
    unsigned char field;
} State;

void AdditiveFinalize__19ApeAnimChannelFloatPf(State *self)
{
    self->field = 1;
}
