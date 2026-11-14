/* GetNameHash__C11AglTopology -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglTopology AglTopology;

struct AglTopology
{
    char pad_00[0x130];
    int nameHash;
};

int GetNameHash__C11AglTopology(const AglTopology *self)
{
    return self->nameHash;
}
