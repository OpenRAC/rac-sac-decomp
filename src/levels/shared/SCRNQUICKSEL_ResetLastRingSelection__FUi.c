/* SCRNQUICKSEL_ResetLastRingSelection__FUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int D_L01_003A925C;

void SCRNQUICKSEL_ResetLastRingSelection__FUi(unsigned int unused)
{
    (void)unused;
    D_L01_003A925C = -1;
}
