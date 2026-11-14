/* sceGsSyncVCallback -- 160 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GS_CONTEXT {
    short x;
    short y;
    short z;
    short imr;
    int callback;
    int intcHandler;
} GS_CONTEXT;

extern GS_CONTEXT *sceGsGetGParam(void);
extern void DisableIntc(int intc);
extern void EnableIntc(int intc);
extern void RemoveIntcHandler(int intc, int handler);
extern int AddIntcHandler(int intc, int handler, int arg);

int sceGsSyncVCallback(int callback)
{
    GS_CONTEXT *ctx = sceGsGetGParam();
    int old = ctx->callback;

    if (callback == 0) {
        DisableIntc(2);
        RemoveIntcHandler(2, ctx->intcHandler);
        ctx->intcHandler = 0;
        ctx->callback = 0;
    } else {
        if (old == 0) {
            ctx->callback = callback;
        } else {
            DisableIntc(2);
            RemoveIntcHandler(2, ctx->intcHandler);
            ctx->callback = callback;
        }
        ctx->intcHandler = AddIntcHandler(2, callback, -1);
        EnableIntc(2);
    }

    return old;
}
