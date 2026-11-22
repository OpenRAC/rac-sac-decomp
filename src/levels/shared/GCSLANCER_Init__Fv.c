/* GCSLANCER_Init__Fv -- 140 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs the level setup helpers in order: loads the first table, registers the
 * record with the pooled block, wires the two linked pairs and finishes with
 * the follow-up.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_10AD28.c.
 */

extern char D_L24_0035AA28[];
extern char D_L24_003A47C0[];
extern char D_L24_0025B7B0[];
extern char *g_gcs;
extern char D_L24_0025B6F0[];
extern char g_gcslancer_shield_type[];
extern char D_L24_0035ABC8[];
extern int g_gcslancer_laser_type[];
extern char D_L24_0035AE08[];

extern void JET_EffectRegister__FP16JET_EffectConfig(char *a0);
extern void ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(char *node, int value);
extern void GCSENEMY_StaticInitTroupe__FP25GCSENEMY_StaticTroupeDataPC8MobyFormPC14GCSFRAG_Config(void *d, void *s, int a);
extern void GCSSHIELD_CreateType__FP20GCSSHIELD_EffectTypeP22GCSSHIELD_EffectConfig(void *d, void *s);
extern void GCSLASER_CreateType__FP13GCSLASER_TypePC15GCSLASER_Config(int *o, void *a1);
extern void GCSLANCER_Reset__Fv(void);

void GCSLANCER_Init__Fv(void)
{
    JET_EffectRegister__FP16JET_EffectConfig(D_L24_0035AA28);
    ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(D_L24_003A47C0, (int)D_L24_0025B7B0);
    GCSENEMY_StaticInitTroupe__FP25GCSENEMY_StaticTroupeDataPC8MobyFormPC14GCSFRAG_Config(D_L24_003A47C0 + 0x1C, g_gcs + 0x410, (int)D_L24_0025B6F0);
    GCSSHIELD_CreateType__FP20GCSSHIELD_EffectTypeP22GCSSHIELD_EffectConfig(g_gcslancer_shield_type, D_L24_0035ABC8);
    GCSLASER_CreateType__FP13GCSLASER_TypePC15GCSLASER_Config(g_gcslancer_laser_type, D_L24_0035AE08);
    GCSLANCER_Reset__Fv();
}
