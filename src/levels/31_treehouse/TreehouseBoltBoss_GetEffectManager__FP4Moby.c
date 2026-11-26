/* TreehouseBoltBoss_GetEffectManager__FP4Moby -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x58.
 */

typedef struct State {
    char pad[0x58];
    int field;
} State;

int TreehouseBoltBoss_GetEffectManager__FP4Moby(State *self)
{
    return self->field;
}
