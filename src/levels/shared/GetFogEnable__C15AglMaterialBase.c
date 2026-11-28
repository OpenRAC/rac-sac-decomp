/* GetFogEnable__C15AglMaterialBase -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglMaterialBase {
    char pad[0x50];
    unsigned long long flags;
} AglMaterialBase;

int GetFogEnable__C15AglMaterialBase(const AglMaterialBase *self)
{
    unsigned long long w = self->flags;
    unsigned char b = (unsigned char)(w >> 33);
    return b & 1;
}
