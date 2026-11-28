/* GetLightEnable__C15AglMaterialBase -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglMaterialBase {
    char pad[0x54];
    unsigned int flags;
} AglMaterialBase;

int GetLightEnable__C15AglMaterialBase(const AglMaterialBase *self)
{
    unsigned long long w = self->flags;
    unsigned char b = (unsigned char)w;
    return b & 1;
}
