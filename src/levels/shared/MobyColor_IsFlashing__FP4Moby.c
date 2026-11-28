/* MobyColor_IsFlashing__FP4Moby -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tests whether the value is the id of one of the table entries.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_079BD0.c.
 */

typedef struct { void *id; char pad04[0x14]; } Ent;
extern unsigned int D_L01_0026CDC8;
extern Ent D_L01_003B2E00[];

int MobyColor_IsFlashing__FP4Moby(void *value)
{
    unsigned int i;

    for (i = 0; i < D_L01_0026CDC8; i++)
        if (D_L01_003B2E00[i].id == value)
            return 1;
    return 0;
}
