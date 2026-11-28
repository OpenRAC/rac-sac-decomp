/* Active__11MobyShocked -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0xC8 is non-zero.
 */

typedef struct State {
    char pad[0xC8];
    int field;
} State;

int Active__11MobyShocked(State *self)
{
    return self->field != 0;
}
