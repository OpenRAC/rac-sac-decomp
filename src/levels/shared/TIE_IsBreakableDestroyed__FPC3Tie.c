/* TIE_IsBreakableDestroyed__FPC3Tie -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * True when the id at +0x54 is the 0xFFFF sentinel and the flag bit at +0x61
 * is clear.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/10_quodrona/LEVEL_10_084C70.c.
 */

struct Obj {
    char pad00[0x54];
    unsigned short f54;
    char pad56[0xB];
    unsigned char b61;
};

int TIE_IsBreakableDestroyed__FPC3Tie(struct Obj *o)
{
    int t = o->f54;

    return (t ^ 0xFFFF) == 0 && ((o->b61 ^ 1) & 1);
}
