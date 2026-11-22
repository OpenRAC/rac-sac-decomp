/* Bolt_SetBoltPlayerThreshold__Ff -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Squares the argument into the global float.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/05_medical_outpost/LEVEL_05_150908.c.
 */

extern float D_L01_003AB000;

void Bolt_SetBoltPlayerThreshold__Ff(float x)
{
    D_L01_003AB000 = x * x;
}
