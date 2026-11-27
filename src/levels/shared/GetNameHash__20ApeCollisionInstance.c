/* GetNameHash__20ApeCollisionInstance -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct NameHash {
    unsigned int value;
} NameHash;

typedef struct ApeCollisionInstance {
    char pad[0x8C];
    unsigned int nameHash;
} ApeCollisionInstance;

NameHash *GetNameHash__20ApeCollisionInstance(
    NameHash *out, const ApeCollisionInstance *self)
{
    out->value = self->nameHash;
    return out;
}
