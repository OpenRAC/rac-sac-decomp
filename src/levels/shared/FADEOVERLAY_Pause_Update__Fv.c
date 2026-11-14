/* FADEOVERLAY_Pause_Update__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tFADEOVERLAY tFADEOVERLAY;

extern tFADEOVERLAY D_FE_00144C60[];
extern void FADEOVERLAYOBJ_Update__FP12tFADEOVERLAY(tFADEOVERLAY *overlay);

void FADEOVERLAY_Pause_Update__Fv(void)
{
    FADEOVERLAYOBJ_Update__FP12tFADEOVERLAY(D_FE_00144C60);
}
