/* GCSMAXI_IdleStateExit__FPv -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Resets the two float slot pairs at +0x274 and +0x2A4 of the record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_110108.c.
 */

extern void GCSENEMY_TurretDeactivate__FP15GCSENEMY_Turret(void *a0);

void GCSMAXI_IdleStateExit__FPv(char *record)
{
    GCSENEMY_TurretDeactivate__FP15GCSENEMY_Turret(record + 0x274);
    GCSENEMY_TurretDeactivate__FP15GCSENEMY_Turret(record + 0x2A4);
}
