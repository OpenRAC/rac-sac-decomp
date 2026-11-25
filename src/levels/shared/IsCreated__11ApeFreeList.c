/* IsCreated__11ApeFreeList -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x24 is non-zero.
 */

typedef struct State {
    char pad[0x24];
    int field;
} State;

int IsCreated__11ApeFreeList(State *self)
{
    return self->field != 0;
}
