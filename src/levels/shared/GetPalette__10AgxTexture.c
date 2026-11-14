/* GetPalette__10AgxTexture -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AgxTexture AgxTexture;

struct AgxTexture {
    unsigned char reserved[0x60];
    unsigned int palette;
};

unsigned int GetPalette__10AgxTexture(AgxTexture *self)
{
    return self->palette;
}
