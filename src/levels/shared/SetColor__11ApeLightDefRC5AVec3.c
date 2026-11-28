/* SetColor__11ApeLightDefRC5AVec3 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned int AVec3 __attribute__((mode(TI)));

typedef struct ApeLightDef {
    char pad[0x80];
    AVec3 color;
} ApeLightDef;

void SetColor__11ApeLightDefRC5AVec3(ApeLightDef *self, const AVec3 *src)
{
    self->color = *src;
}
