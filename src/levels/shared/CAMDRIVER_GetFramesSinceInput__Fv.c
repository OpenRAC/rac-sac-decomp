/* CAMDRIVER_GetFramesSinceInput__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_currentFrame;
extern int g_lastInputFrame;

int CAMDRIVER_GetFramesSinceInput__Fv(void)
{
    return g_currentFrame - g_lastInputFrame;
}
