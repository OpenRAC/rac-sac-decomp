/* IsIndexed__C14AglSubMeshBase -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x20 is non-zero.
 */

typedef struct State {
    char pad[0x20];
    int field;
} State;

int IsIndexed__C14AglSubMeshBase(State *self)
{
    return self->field != 0;
}
