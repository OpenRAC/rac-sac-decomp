/* GetAnimateOffscreen__C17ApeAnimCompositor -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0xC5.
 */

typedef struct State {
    char pad[0xC5];
    unsigned char field;
} State;

int GetAnimateOffscreen__C17ApeAnimCompositor(State *self)
{
    return self->field;
}
