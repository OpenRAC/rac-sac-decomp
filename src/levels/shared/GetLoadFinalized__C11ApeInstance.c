/* GetLoadFinalized__C11ApeInstance -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeInstance {
    char pad[0x130];
    unsigned long long flags;
} ApeInstance;

int GetLoadFinalized__C11ApeInstance(const ApeInstance *self)
{
    unsigned long long w = self->flags;
    unsigned char b = (unsigned char)(w >> 51);
    return b & 1;
}
