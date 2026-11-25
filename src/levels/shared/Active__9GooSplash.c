/* Active__9GooSplash -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x5C is non-zero.
 */

typedef struct State {
    char pad[0x5C];
    int field;
} State;

int Active__9GooSplash(State *self)
{
    return self->field != 0;
}
