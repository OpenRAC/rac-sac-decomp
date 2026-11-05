/* GetBSphere__C11AglTopology -- FE.REL 0x000E1DD0, 8 bytes.
 *
 * Body translated from the retail module.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
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
