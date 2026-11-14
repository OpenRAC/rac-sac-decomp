/* SetProjectionType__19AglRenderTargetBase24AglRenderTargetEProjType -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglRenderTargetBase AglRenderTargetBase;

typedef enum AglRenderTargetEProjType {
    AglRenderTargetEProjType_Perspective = 0,
    AglRenderTargetEProjType_Orthographic = 1
} AglRenderTargetEProjType;

struct AglRenderTargetBase {
    unsigned char reserved[0x31];
    unsigned char projectionType;
};

void SetProjectionType__19AglRenderTargetBase24AglRenderTargetEProjType(AglRenderTargetBase *self, AglRenderTargetEProjType type)
{
    self->projectionType = type;
}
