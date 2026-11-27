/* OnLevelUnLoad__14DrawObjManager -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DrawObjManager {
    char pad[0x38000];
    char loaded[0x356D];
} DrawObjManager;

void OnLevelUnLoad__14DrawObjManager(DrawObjManager *self)
{
    self->loaded[0x356C] = 0;
}
