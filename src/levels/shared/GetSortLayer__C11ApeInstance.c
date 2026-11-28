/* GetSortLayer__C11ApeInstance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x135.
 */

typedef struct State {
    char pad[0x135];
    unsigned char field;
} State;

int GetSortLayer__C11ApeInstance(State *self)
{
    return self->field;
}
