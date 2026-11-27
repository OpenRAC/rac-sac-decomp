/* PAUSEMODE_ResetReusableTextBuffer__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern char g_reusableTextBuffer[];
extern char *g_reusableTextBufferPtr;

void PAUSEMODE_ResetReusableTextBuffer__Fv(void)
{
    g_reusableTextBufferPtr = g_reusableTextBuffer;
}
