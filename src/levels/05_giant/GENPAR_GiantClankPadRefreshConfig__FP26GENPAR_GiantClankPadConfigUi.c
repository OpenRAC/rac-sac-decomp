/* GENPAR_GiantClankPadRefreshConfig__FP26GENPAR_GiantClankPadConfigUi -- 164 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_04_1FE018.c.
 */

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    char pad0[4];
    int i14;
    char pad[4];
    float f1C;
    float f20;
    float f24;
    float f28;
    int i2C;
    float f30;
    float f34;
} Rec;

/* LEVEL_04:0x1FE018 -- 164-byte body, 2 placements.
 *
 * What it does: turns three 0x20-fixed-point differences into floats scaled by
 * 2^-31, splits the word at 0x14 into its low 24 bits (stored at 0x2C) and its
 * top byte, and writes that top byte back as a float at 0x30.
 *
 * Where the form comes from:
 *   - the top byte is an *unsigned int*, so the pinned chain emits the retail's
 *     sign-test fixup (bltz + (v>>1|(v&1))*2) even though the value is 0..255;
 *   - the three scaled differences keep the retail's store order 0x24, 0x28,
 *     0x34 around the conversion.
 *
 * Proof: *** EXACT *** at LEVEL_04.REL:0x1FE018, profile pinned.
 */
void GENPAR_GiantClankPadRefreshConfig__FP26GENPAR_GiantClankPadConfigUi(Rec *a0)
{
    unsigned int v = a0->i14;
    unsigned int b = (v >> 24) & 0xFF;

    a0->f24 = (a0->f04 - a0->f00) * 0x1p-31f;
    a0->f28 = (a0->f0C - a0->f08) * 0x1p-31f;
    a0->i2C = v & 0xFFFFFF;
    a0->f30 = (float)b;
    a0->f34 = (a0->f20 - a0->f1C) * 0x1p-31f;
}
