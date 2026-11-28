/* GetLOD__10ApeGeomDefUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeLODSlot {
    void *topology;
    void *pad;
} ApeLODSlot;

typedef struct ApeGeomDef {
    char pad[0x7C];
    ApeLODSlot lods[1];
} ApeGeomDef;

ApeLODSlot *GetLOD__10ApeGeomDefUi(ApeGeomDef *self, unsigned int i)
{
    return &self->lods[i];
}
