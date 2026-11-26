/* SetAnimateOffscreen__17ApeAnimCompositorb -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument as a byte at offset 0xC5.
 */

typedef struct State {
    char pad[0xC5];
    unsigned char field;
} State;

void SetAnimateOffscreen__17ApeAnimCompositorb(State *self, int value)
{
    self->field = value;
}
