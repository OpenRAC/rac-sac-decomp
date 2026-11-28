/* GetSkeleton__10ApeGeomDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x9C.
 */

typedef struct State {
    char pad[0x9C];
    int field;
} State;

int GetSkeleton__10ApeGeomDef(State *self)
{
    return self->field;
}
