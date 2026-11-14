/* BeginLoad__12ApeLevelInst -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeLevelInst {
    int worldIndex;
} ApeLevelInst;

extern int BeginLoad__8ApeWorldUi(unsigned int worldId);

void BeginLoad__12ApeLevelInst(ApeLevelInst *self)
{
    self->worldIndex = BeginLoad__8ApeWorldUi(1);
}
