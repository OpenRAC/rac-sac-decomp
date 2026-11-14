/* GetWidth__C14AglTextureBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglTexture AglTexture;

struct AglTexture {
    unsigned char unknown_000[0x34];
    unsigned short width;
};

unsigned int GetWidth__C14AglTextureBase(AglTexture *texture)
{
    return texture->width;
}
