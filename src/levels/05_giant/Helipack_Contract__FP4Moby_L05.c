/* Helipack_Contract__FP4Moby -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets a state byte to 3 when it is 1 or 2, then calls a helper with a float
 * pair.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_17BCC8.c.
 */

struct Obj {
    char pad_00[0x45];
    unsigned char b_45;
};

void MOBY_BlendMobyAnim__FP4MobyUifbT3f(struct Obj *o, int a1, int a2, int a3, float f12, float f13);

void Helipack_Contract__FP4Moby(struct Obj *o)
{
    if (o->b_45 - 1U < 2U) {
        o->b_45 = 3;
        MOBY_BlendMobyAnim__FP4MobyUifbT3f(o, 3, 0, 1, 0.15f, 0.0f);
    }
}
