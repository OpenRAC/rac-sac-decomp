/* GCSCORVETTE_CloseLauncher__FP17GCSCORVETTE_Actor18GCSCORVETTE_DoorID -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_105398.c.
 */

void GCSCORVETTE_LauncherStop__FP20GCSCORVETTE_Launcher(void *p);

void GCSCORVETTE_CloseLauncher__FP17GCSCORVETTE_Actor18GCSCORVETTE_DoorID(char *a0, int a1)
{
    *(float *)((char *)a0 + (a1 << 3) + 0x3FC) = 0.033333335f;
    GCSCORVETTE_LauncherStop__FP20GCSCORVETTE_Launcher((char *)a0 + (a1 * 20 + 0x408));
}
