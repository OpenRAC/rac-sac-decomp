/* SOUND_GetMaximumDistance__FG18SOUND_ASSET_HANDLE -- FE.REL 0x00011AA0, 12 bytes.
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

typedef struct SOUND_ASSET_HANDLE SOUND_ASSET_HANDLE;

struct SOUND_ASSET_HANDLE
{
    int x;
};

float SOUND_GetMaximumDistance__FG18SOUND_ASSET_HANDLE(SOUND_ASSET_HANDLE *unused)
{
    (void)unused;
    return 0.0f;
}
