/* GetFXFrameIndex__C14DrawObjManager -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DrawObjManager {
    char pad[0x38000];
    char fx[0x3531];
} DrawObjManager;

int GetFXFrameIndex__C14DrawObjManager(const DrawObjManager *self)
{
    return self->fx[0x3530];
}
