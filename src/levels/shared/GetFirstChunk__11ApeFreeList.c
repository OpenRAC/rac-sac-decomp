/* GetFirstChunk__11ApeFreeList -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x18.
 */

typedef struct State {
    char pad[0x18];
    int field;
} State;

int GetFirstChunk__11ApeFreeList(State *self)
{
    return self->field;
}
