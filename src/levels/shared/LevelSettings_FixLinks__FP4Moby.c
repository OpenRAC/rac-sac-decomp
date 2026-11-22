/* LevelSettings_FixLinks__FP4Moby -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * When the global switch is on and the counter is not positive, bumps the
 * counter and starts the effect for the first word of the object's linked
 * record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_18D750.c.
 */

extern unsigned char g_moby_firstInit;
extern int D_L03_00295BB4;
extern void BREAKABLE_SetBoltTotal__Fi(unsigned int value);

void LevelSettings_FixLinks__FP4Moby(char *o)
{
    if (g_moby_firstInit != 0) {
        if (D_L03_00295BB4 <= 0) {
            D_L03_00295BB4 = D_L03_00295BB4 + 1;
            BREAKABLE_SetBoltTotal__Fi(**(int **)(o + 0x54));
        }
    }
}
