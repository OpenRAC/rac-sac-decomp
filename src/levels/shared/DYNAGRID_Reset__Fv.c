/* DYNAGRID_Reset__Fv -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_013368.c.
 */

extern unsigned char D_L01_0031A7A9;
extern char G_dynaGrid[];
extern void WORLDGRID_Clear__FP9WorldGrid(void *);

void DYNAGRID_Reset__Fv(void)
{
    char *record;
    if (D_L01_0031A7A9 != 0) {
        record = G_dynaGrid;
        do {
            WORLDGRID_Clear__FP9WorldGrid(record);
            record += 0x68;
        } while (record < G_dynaGrid + 0xd0);
    }
}
