/* GetNumLOD__10ApeGeomDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x70.
 */

typedef struct State {
    char pad[0x70];
    unsigned char field;
} State;

int GetNumLOD__10ApeGeomDef(State *self)
{
    return self->field;
}
