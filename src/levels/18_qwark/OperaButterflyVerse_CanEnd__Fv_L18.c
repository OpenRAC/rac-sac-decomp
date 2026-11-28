/* OperaButterflyVerse_CanEnd__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct OperaMoby {
    unsigned char pad[0x45];
    unsigned char state;
} OperaMoby;

extern OperaMoby *g_butterflyVerse;

int OperaButterflyVerse_CanEnd__Fv(void)
{
    return g_butterflyVerse->state == 2;
}
