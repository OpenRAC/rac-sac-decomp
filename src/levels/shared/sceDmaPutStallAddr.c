/* sceDmaPutStallAddr -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

unsigned int sceDmaPutStallAddr(unsigned int addr)
{
    unsigned int *p;
    unsigned int old;

    p = (unsigned int *)0x1000E060;
    old = *p;
    *p = addr;
    return old;
}
