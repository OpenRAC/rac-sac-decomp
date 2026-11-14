/* GetBSphere__C11AglTopology -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeSphere ApeSphere;
typedef struct AglTopology AglTopology;

struct ApeSphere
{
    float center_x;
    float center_y;
    float center_z;
    float radius;
};

struct AglTopology
{
    char pad_00[0x120];
    ApeSphere bsphere;
};

const ApeSphere *GetBSphere__C11AglTopology(const AglTopology *self)
{
    return &self->bsphere;
}
