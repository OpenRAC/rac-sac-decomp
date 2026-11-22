/* HUDPROMQ_Show__Fii -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0D7C80.c.
 */

extern void HUDPROMQ_Show__Fiiii(int, int, void *, void *);

void HUDPROMQ_Show__Fii(void *a, void *b)
{
    HUDPROMQ_Show__Fiiii(0xef, 0x87, a, b);
}
