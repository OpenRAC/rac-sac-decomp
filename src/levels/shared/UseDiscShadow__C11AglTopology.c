/* UseDiscShadow__C11AglTopology -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglTopology {
    char pad[0x110];
    unsigned long long flags;
} AglTopology;

int UseDiscShadow__C11AglTopology(const AglTopology *self)
{
    unsigned long long w = self->flags;
    unsigned char b = (unsigned char)(w >> 17);
    return b & 1;
}
