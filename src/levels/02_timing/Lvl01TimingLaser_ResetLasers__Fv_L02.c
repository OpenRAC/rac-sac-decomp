/* Lvl01TimingLaser_ResetLasers__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned char g_laserReset;

void Lvl01TimingLaser_ResetLasers__Fv(void)
{
    g_laserReset++;
}
