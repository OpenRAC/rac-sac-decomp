/* Active__14AcidFoodSplash -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0xD4 is non-zero.
 */

typedef struct State {
    char pad[0xD4];
    int field;
} State;

int Active__14AcidFoodSplash(State *self)
{
    return self->field != 0;
}
