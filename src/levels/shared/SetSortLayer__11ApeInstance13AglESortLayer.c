/* SetSortLayer__11ApeInstance13AglESortLayer -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument as a byte at offset 0x135.
 */

typedef struct State {
    char pad[0x135];
    unsigned char field;
} State;

void SetSortLayer__11ApeInstance13AglESortLayer(State *self, int value)
{
    self->field = value;
}
