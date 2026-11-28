/* GetKey__20ApeAnimChannelVectorP5AVec3 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned int AVec3 __attribute__((mode(TI)));

typedef struct ApeAnimChannelVector {
    char pad[0x30];
    AVec3 key;
} ApeAnimChannelVector;

void GetKey__20ApeAnimChannelVectorP5AVec3(
    ApeAnimChannelVector *self, AVec3 *dst)
{
    *dst = self->key;
}
