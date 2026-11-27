/* GetFogGroup__C11ApeInstance -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeInstance {
    char pad[0x136];
    unsigned short flags;
} ApeInstance;

int GetFogGroup__C11ApeInstance(const ApeInstance *self)
{
    unsigned long long w = self->flags;
    unsigned char b = (unsigned char)w;
    return b & 1;
}
