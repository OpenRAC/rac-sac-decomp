/* Serialize__14AglTextureBaseRQ33IFF7Texture6Header -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglTextureBase {
    unsigned char unknown_000[0x30];
    unsigned int field_30;
    unsigned short field_34;
    unsigned short field_36;
} AglTextureBase;

typedef struct IFF {
    unsigned int word0;
    unsigned short word4;
    unsigned short word6;
    unsigned char unknown_008[3];
    char name[1];
} IFF;

extern void SetName__14AglTextureBasePCcb(AglTextureBase *self,
                                          const char *name,
                                          int flag);

void Serialize__14AglTextureBaseRQ33IFF7Texture6Header(AglTextureBase *self,
                                                       IFF *reader,
                                                       void *header)
{
    (void)header;

    self->field_30 = reader->word0;
    self->field_34 = reader->word4;
    self->field_36 = reader->word6;

    SetName__14AglTextureBasePCcb(self, reader->name, 0);
}
