/* HUDGENHEALTHBAR_InitAll__Fv -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B3120.c.
 */

extern void HUDGENHEALTHBAR_Init__FUi(unsigned int);

void HUDGENHEALTHBAR_InitAll__Fv(void)
{
    unsigned int index;
    for (index = 0; index < 8; ++index)
        HUDGENHEALTHBAR_Init__FUi(index);
}
