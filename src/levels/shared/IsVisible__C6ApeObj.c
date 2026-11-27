/* IsVisible__C6ApeObj -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeObj {
    char pad[0xA4];
    unsigned int flags;
} ApeObj;

int IsVisible__C6ApeObj(const ApeObj *self)
{
    unsigned long long w = self->flags;
    return ((int)w) & 1;
}
