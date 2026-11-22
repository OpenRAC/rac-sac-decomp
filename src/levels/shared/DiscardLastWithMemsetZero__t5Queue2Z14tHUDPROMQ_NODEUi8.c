/* DiscardLastWithMemsetZero__t5Queue2Z14tHUDPROMQ_NODEUi8 -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one slot of the ring buffer and advances it.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_015F20.c.
 */

struct rec {
    char pad[0x60];
    int f60;
    int f64;
    int f68;
};

void *memset(void *, int, int);

int DiscardLastWithMemsetZero__t5Queue2Z14tHUDPROMQ_NODEUi8(struct rec *p)
{
    if (p->f60 == p->f64)
        return 0;

    memset((char *)p + p->f64 * 12, 0, 12);
    p->f64 = p->f64 + 1;
    if (p->f64 == 8)
        p->f64 = 0;
    p->f68--;
    return 1;
}
