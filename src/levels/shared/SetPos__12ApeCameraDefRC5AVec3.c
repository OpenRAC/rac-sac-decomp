/* SetPos__12ApeCameraDefRC5AVec3 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned int AVec3 __attribute__((mode(TI)));

typedef struct ApeCameraDef {
    char pad[0xA0];
    AVec3 pos;
} ApeCameraDef;

void SetPos__12ApeCameraDefRC5AVec3(ApeCameraDef *self, const AVec3 *src)
{
    self->pos = *src;
}
