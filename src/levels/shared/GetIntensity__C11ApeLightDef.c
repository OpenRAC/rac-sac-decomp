/* GetIntensity__C11ApeLightDef -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeLightDef {
    char pad[0x90];
    float intensity;
} ApeLightDef;

float GetIntensity__C11ApeLightDef(const ApeLightDef *self)
{
    return self->intensity * self->intensity;
}
