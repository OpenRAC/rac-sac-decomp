/* GetPhysicsData__20ApeCollisionInstance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AgxTexture AgxTexture;

struct AgxTexture {
    unsigned char reserved[0x60];
    unsigned int palette;
};

unsigned int GetPhysicsData__20ApeCollisionInstance(AgxTexture *self)
{
    return self->palette;
}
