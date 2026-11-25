/* KillEffect__14AcidFoodSplashP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the constant 1 in the word at offset 0xD4.
 */

typedef struct State {
    char pad[0xD4];
    int field;
} State;

void KillEffect__14AcidFoodSplashP4Moby(State *self)
{
    self->field = 1;
}
