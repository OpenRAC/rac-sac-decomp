/* Active__13LightningTree -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x90 is non-zero.
 */

typedef struct State {
    char pad[0x90];
    int field;
} State;

int Active__13LightningTree(State *self)
{
    return self->field != 0;
}
