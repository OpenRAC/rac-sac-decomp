/* Active__13MobyBoneFlame -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x2C is non-zero.
 */

typedef struct State {
    char pad[0x2C];
    int field;
} State;

int Active__13MobyBoneFlame(State *self)
{
    return self->field != 0;
}
