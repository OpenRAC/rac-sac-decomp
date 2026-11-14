/* Update__12ApeLevelInstfP15AglRenderTarget -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeLevelInst ApeLevelInst;
typedef struct ApeCameraInstance ApeCameraInstance;
typedef struct AglRenderTarget AglRenderTarget;

extern void SetParamsToRenderTarget__17ApeCameraInstanceP15AglRenderTarget(
    ApeCameraInstance *camera, AglRenderTarget *target);
extern void Update__8ApeWorld(void *world);

struct ApeLevelInst {
    void *world;
    unsigned char unknown_004[0x04];
    ApeCameraInstance *camera;
};

void Update__12ApeLevelInstfP15AglRenderTarget(ApeLevelInst *self,
                                                float value,
                                                AglRenderTarget *target)
{
    (void)value;

    if (target != 0) {
        if (self->camera != 0) {
            SetParamsToRenderTarget__17ApeCameraInstanceP15AglRenderTarget(
                self->camera, target);
        }
    }
    Update__8ApeWorld(self->world);
}
