/* IsEmitInLocalSpace__C16AglIPtlContainer -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the unsigned word at offset 0x14 is below 1.
 */

typedef struct State {
    char pad[0x14];
    unsigned int field;
} State;

int IsEmitInLocalSpace__C16AglIPtlContainer(State *self)
{
    return self->field < 1;
}
