/* SetRadius__9ApeSpheref -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeSphere ApeSphere;

struct ApeSphere
{
    float center_x;
    float center_y;
    float center_z;
    float radius;
};

void SetRadius__9ApeSpheref(ApeSphere *self, float radius)
{
    self->radius = radius;
}
