/* Active__12TangleGrowth -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x58 is non-zero.
 */

typedef struct State {
    char pad[0x58];
    int field;
} State;

int Active__12TangleGrowth(State *self)
{
    return self->field != 0;
}
