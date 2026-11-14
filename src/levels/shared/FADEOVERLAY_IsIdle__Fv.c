/* FADEOVERLAY_IsIdle__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tFADEOVERLAY tFADEOVERLAY;

extern tFADEOVERLAY g_FADEOVERLAY;

extern int FADEOVERLAYOBJ_IsIdle__FP12tFADEOVERLAY(tFADEOVERLAY *self);

void FADEOVERLAY_IsIdle__Fv(void)
{
    FADEOVERLAYOBJ_IsIdle__FP12tFADEOVERLAY(&g_FADEOVERLAY);
}
