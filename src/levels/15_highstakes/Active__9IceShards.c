/* Active__9IceShards -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x1C is non-zero.
 */

typedef struct State {
    char pad[0x1C];
    int field;
} State;

int Active__9IceShards(State *self)
{
    return self->field != 0;
}
