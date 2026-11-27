/* OnLevelStartUpUnLoad__14DrawObjManager -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DrawObjManager {
    char pad[0x2C398];
    unsigned char flag;
} DrawObjManager;

void OnLevelStartUpUnLoad__14DrawObjManager(DrawObjManager *self)
{
    self->flag = 0;
}
