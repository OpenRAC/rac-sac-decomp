/* GetPrimType__C14AglSubMeshBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglSubMeshBase AglSubMeshBase;

struct AglSubMeshBase
{
    char pad_00[0x38];
    int primType;
};

int GetPrimType__C14AglSubMeshBase(const AglSubMeshBase *self)
{
    return self->primType;
}
