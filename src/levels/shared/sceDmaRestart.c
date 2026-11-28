/* sceDmaRestart -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

int sceDmaRestart(volatile unsigned int *self, unsigned int chcr)
{
    unsigned int old;

    old = *self;
    *self = chcr;
    return (int)((old >> 8) & 1);
}
