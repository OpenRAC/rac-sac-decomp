/* GCSENEMY_KnockMotorReset__FP31GCSENEMY_KnockMotorInstanceDataPC25GCSENEMY_KnockMotorConfig -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The game writes a 28-byte block: a flag word, then two 12-byte records (two
 * floats and an int) copied from two global records. Each record copy is one
 * unaligned quadword move (ldl/ldr on the read side, sdl/sdr on the write
 * side) plus a word at +8: that is the shape of a 12-byte aggregate made of
 * two floats and an int.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0FDA00.c.
 */

typedef struct {
    float f[2];
    int   w;
} Record;

typedef struct {
    int    flag;
    Record rec1;
    Record rec2;
} Out;

extern Record G_AtVector;
extern Record g_zeroVec3;

void GCSENEMY_KnockMotorReset__FP31GCSENEMY_KnockMotorInstanceDataPC25GCSENEMY_KnockMotorConfig(Out *dst, int flag)
{
    dst->flag = flag;
    dst->rec1 = G_AtVector;
    dst->rec2 = g_zeroVec3;
}
