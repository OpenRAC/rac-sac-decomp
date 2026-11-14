/* GetKey__19ApeAnimChannelFloat -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeAnimChannelFloat ApeAnimChannelFloat;

struct ApeAnimChannelFloat
{
    char pad_00[0x30];
    float key[1];
};

float *GetKey__19ApeAnimChannelFloat(ApeAnimChannelFloat *self)
{
    return self->key;
}
