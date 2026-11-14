/* PAR_SetGroupCenter__FPC9PAR_GroupPC4VEC3PC18DRAW_RenderContext -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct PAR_Group PAR_Group;
typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;
typedef struct DRAW_RenderContext DRAW_RenderContext;

extern unsigned int g_par_screen_depth;

extern unsigned int DRAW_GetScreenDepth__FPC4VEC3PC18DRAW_RenderContext(
    VEC3 *pos, DRAW_RenderContext *rctx);

void PAR_SetGroupCenter__FPC9PAR_GroupPC4VEC3PC18DRAW_RenderContext(
    PAR_Group *group, VEC3 *center, DRAW_RenderContext *rctx)
{
    (void)group;
    g_par_screen_depth =
        DRAW_GetScreenDepth__FPC4VEC3PC18DRAW_RenderContext(center, rctx);
}
