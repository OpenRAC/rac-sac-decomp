/* GetSpecularColor__C15AglMaterialBase -- FE.REL 0x000E23D0, 8 bytes.
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

typedef struct AVec4 AVec4;
typedef struct AglMaterialBase AglMaterialBase;

struct AVec4
{
    float x;
    float y;
    float z;
    float w;
};

struct AglMaterialBase
{
    char pad_00[0x40];
    AVec4 specularColor;
};

const AVec4 *GetSpecularColor__C15AglMaterialBase(const AglMaterialBase *self)
{
    return &self->specularColor;
}
