/* OnLevelUnLoad__14DrawObjManager -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DrawObjManager {
    char pad[0x22408];
    unsigned char loaded;
} DrawObjManager;

void OnLevelUnLoad__14DrawObjManager(DrawObjManager *self)
{
    self->loaded = 0;
}
