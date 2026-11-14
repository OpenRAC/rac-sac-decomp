/* Shutdown__11ApeSkeleton -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The shutdown of the skeleton is that of its definition class; the pointer
 * passed in is not modified.
 */

typedef struct ApeSkeleton ApeSkeleton;

extern void Shutdown__14ApeSkeletonDef(void *self);

void Shutdown__11ApeSkeleton(ApeSkeleton *self)
{
    Shutdown__14ApeSkeletonDef(self);
}
