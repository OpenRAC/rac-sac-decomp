/* IsTriMesh__C18AglPs2BuildMeshInf -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Compares the value at offset 0x50.
 */

typedef struct State {
    char pad[0x50];
    int field;
} State;

int IsTriMesh__C18AglPs2BuildMeshInf(State *self)
{
    return (unsigned)(self->field - 3) < 3u;
}
