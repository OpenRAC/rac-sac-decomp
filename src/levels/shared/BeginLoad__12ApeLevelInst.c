/* BeginLoad__12ApeLevelInst -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores in its first word the world number returned by the static entry
 * ApeWorld::BeginLoad(1). The retail function overwrites its second argument
 * with zero and calls the world alias.
 */

typedef struct ApeLevelInst {
    int worldIndex;
} ApeLevelInst;

extern int BeginLoad__8ApeWorldUi(unsigned int worldId);

void BeginLoad__12ApeLevelInst(ApeLevelInst *self)
{
    self->worldIndex = BeginLoad__8ApeWorldUi(1);
}
