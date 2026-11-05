/* GetAnimData__15AglMaterialBase -- FE.REL 0x000E22F8, 8 bytes.
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

typedef struct AglMaterialBase AglMaterialBase;

struct AglMaterialBase
{
    char pad_00[0x90];
    void *animData;
};

void *GetAnimData__15AglMaterialBase(AglMaterialBase *self)
{
    return self->animData;
}
