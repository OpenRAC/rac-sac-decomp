/* Peek__t5Queue2Z14tHUDPROMQ_NODEUi8Ui -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_015E30.c.
 */

struct Slot {
    char pad00[0x60];
    unsigned int f60;
    unsigned int f64;
};

int Peek__t5Queue2Z14tHUDPROMQ_NODEUi8Ui(struct Slot *s, int idx)
{
    if (s->f60 == s->f64)
        return 0;
    if (idx < s->f60)
        return (int)s + idx * 12;
    return 0;
}
