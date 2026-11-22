/* LWANIM_TableCreate__FP12LWANIM_TableP12LWANIM_Statei -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/08_dayni_moon/LEVEL_08_20FBE8.c.
 */

extern void LWANIM_TableReset__FP12LWANIM_Table(int *);

void LWANIM_TableCreate__FP12LWANIM_TableP12LWANIM_Statei(int *out, int first, int second)
{
    out[0] = first;
    out[1] = second;
    LWANIM_TableReset__FP12LWANIM_Table(out);
}
