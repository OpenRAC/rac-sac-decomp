/* ArenaAmoeboidSmall_FixLinks__FP4Moby -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards the record pointer held in the object to
 * Navigate_FixLinks__FP8Navigate.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_18DDD8.c.
 */

struct Obj;

struct Item {
    char pad0[0x54];
    struct Obj *rec;
};

extern void Navigate_FixLinks__FP8Navigate(struct Obj *o);

void ArenaAmoeboidSmall_FixLinks__FP4Moby(struct Item *item)
{
    Navigate_FixLinks__FP8Navigate(item->rec);
}
