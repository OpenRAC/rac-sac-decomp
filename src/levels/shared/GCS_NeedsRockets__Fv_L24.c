/* GCS_NeedsRockets__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g;

int GCS_NeedsRockets__Fv(void)
{
    return g < 15;
}
