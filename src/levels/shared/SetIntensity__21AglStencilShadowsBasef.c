/* SetIntensity__21AglStencilShadowsBasef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglStencilShadowsBase AglStencilShadowsBase;

struct AglStencilShadowsBase
{
    char pad_00[0x38];
    float intensity;
};

void SetIntensity__21AglStencilShadowsBasef(AglStencilShadowsBase *self, float intensity)
{
    self->intensity = intensity;
}
