/* DISPLAY_CalcFovX__Ff -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern float g_fov;

float DISPLAY_CalcFovX__Ff(float x)
{
    return x * g_fov;
}
