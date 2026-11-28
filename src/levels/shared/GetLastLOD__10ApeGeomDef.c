/* GetLastLOD__10ApeGeomDef -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeGeomDef {
    char pad[0x70];
    unsigned char lastLod;
} ApeGeomDef;

char *GetLastLOD__10ApeGeomDef(ApeGeomDef *self)
{
    unsigned int off = self->lastLod;
    off = (off << 3) + 0x74;
    return (char *)self + off;
}
