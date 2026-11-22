/* GCS_WaveCorvetteGrid_GetWaveID__FPC4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the first word of the table the object's link points to.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_138440.c.
 */

typedef struct {
    int w00;
} Tab;

typedef struct {
    char pad00[0x54];
    Tab *tab;
} Obj;

int GCS_WaveCorvetteGrid_GetWaveID__FPC4Moby(Obj *o)
{
    return o->tab->w00;
}
