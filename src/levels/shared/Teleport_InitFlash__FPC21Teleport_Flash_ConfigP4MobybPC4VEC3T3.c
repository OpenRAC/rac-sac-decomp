/* Teleport_InitFlash__FPC21Teleport_Flash_ConfigP4MobybPC4VEC3T3 -- 136 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_075910.c.
 */

/* LEVEL_01.REL:0x075910: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_L01_12D340(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void Teleport_InitFlash__FPC21Teleport_Flash_ConfigP4MobybPC4VEC3T3(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_L01_12D340(object, context, 1, mode, first, second);
    func_L01_12D340(object, context, 0, mode, first, second);
}
