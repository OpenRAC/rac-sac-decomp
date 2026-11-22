/* SLIDE_StopSound__FP7RATCHET -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0532B8.c.
 */

typedef struct { char before[0x30]; int value; } State;
extern State D_L03_003DDE38;
extern void MOBY_StopOldSound__FP14SND_Positional(int);
void SLIDE_StopSound__FP7RATCHET(void)
{
    int value = D_L03_003DDE38.value;
    if (value != 0) {
        MOBY_StopOldSound__FP14SND_Positional(value);
        D_L03_003DDE38.value = 0;
    }
}