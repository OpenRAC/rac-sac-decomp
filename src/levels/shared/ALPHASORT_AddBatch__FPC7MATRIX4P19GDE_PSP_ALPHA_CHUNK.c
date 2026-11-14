/* ALPHASORT_AddBatch__FPC7MATRIX4P19GDE_PSP_ALPHA_CHUNK -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
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
