/* GetFXFrameIndex__C14DrawObjManager -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DrawObjManager {
    char pad[0x43530];
    char fxFrame;
} DrawObjManager;

int GetFXFrameIndex__C14DrawObjManager(const DrawObjManager *self)
{
    return self->fxFrame;
}
