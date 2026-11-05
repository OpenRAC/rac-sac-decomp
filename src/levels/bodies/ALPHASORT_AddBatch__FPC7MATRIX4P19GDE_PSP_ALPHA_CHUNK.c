/* ALPHASORT_AddBatch__FPC7MATRIX4P19GDE_PSP_ALPHA_CHUNK -- LEVEL13.REL 0x0004A1C8, 48 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   Retail (48 bytes): fill a DrawObjFXCreateParams on the stack
 *   {chunk, mtx} and pass it to AllocateFXObj of the module's
 *   DrawObjManager instance.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (sdk991111-sdkas:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

typedef struct MATRIX4 MATRIX4;
typedef struct GDE_PSP_ALPHA_CHUNK GDE_PSP_ALPHA_CHUNK;
typedef struct DrawObjManager DrawObjManager;

typedef struct {
    GDE_PSP_ALPHA_CHUNK *chunk;
    const MATRIX4 *mtx;
} DrawObjFXCreateParams;

extern DrawObjManager *g_DrawObjManager;
extern void AllocateFXObj__14DrawObjManagerPC21DrawObjFXCreateParams(
    DrawObjManager *self, const DrawObjFXCreateParams *params);

void ALPHASORT_AddBatch__FPC7MATRIX4P19GDE_PSP_ALPHA_CHUNK(
    const MATRIX4 *mtx, GDE_PSP_ALPHA_CHUNK *chunk)
{
    DrawObjFXCreateParams params;

    params.chunk = chunk;
    params.mtx = mtx;
    AllocateFXObj__14DrawObjManagerPC21DrawObjFXCreateParams(
        g_DrawObjManager, &params);
}
