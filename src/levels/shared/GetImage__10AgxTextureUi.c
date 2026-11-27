/* GetImage__10AgxTextureUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AgxImage {
    int id;
    int pad[3];
} AgxImage;

int GetImage__10AgxTextureUi(void *self, unsigned int i)
{
    return ((AgxImage *)((char *)self + 0x20))[i].id;
}
