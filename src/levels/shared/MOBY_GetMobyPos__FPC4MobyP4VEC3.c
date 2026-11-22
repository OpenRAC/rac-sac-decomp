/* MOBY_GetMobyPos__FPC4MobyP4VEC3 -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards three fields of the first argument to VEC_SetVec3__FP4VEC3fff,
 * together with the second argument.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_065230.c.
 */

typedef struct {
    char pad_00[0x30];
    float f_30;
    float f_34;
    float f_38;
} Rec;

extern void VEC_SetVec3__FP4VEC3fff(Rec *a0, float a1, float a2, float a3);

void MOBY_GetMobyPos__FPC4MobyP4VEC3(Rec *a0, Rec *a1)
{
    VEC_SetVec3__FP4VEC3fff(a1, a0->f_30, a0->f_34, a0->f_38);
}
