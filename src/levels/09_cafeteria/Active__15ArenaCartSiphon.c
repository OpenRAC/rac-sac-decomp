/* Active__15ArenaCartSiphon -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x6C is non-zero.
 */

typedef struct State {
    char pad[0x6C];
    int field;
} State;

int Active__15ArenaCartSiphon(State *self)
{
    return self->field != 0;
}
