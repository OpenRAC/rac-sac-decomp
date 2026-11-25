/* CanActivate__10ClankDrown -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0xC.
 */

typedef struct State {
    char pad[0xC];
    unsigned char field;
} State;

int CanActivate__10ClankDrown(State *self)
{
    return self->field;
}
