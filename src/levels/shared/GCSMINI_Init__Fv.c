/* GCSMINI_Init__Fv -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Initialises the global record: sets it up, registers the first handler,
 * links it to the shared source with the second handler, and runs the
 * follow-up.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_111AD0.c.
 */

extern char D_L24_0035C298[];
extern char D_L24_003A4FC0[];
extern char *g_gcs;

extern void JET_EffectRegister__FP16JET_EffectConfig(char *a0);
extern void ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(char *o, int value);
extern void GCSENEMY_StaticInitTroupe__FP25GCSENEMY_StaticTroupeDataPC8MobyFormPC14GCSFRAG_Config(char *d, char *s, int a);
extern void GCSMINI_Reset__Fv(void);
extern void func_L24_25C118(void);
extern void func_L24_25C0A8(void);

void GCSMINI_Init__Fv(void)
{
    char *g;

    JET_EffectRegister__FP16JET_EffectConfig(D_L24_0035C298);
    g = D_L24_003A4FC0;
    ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(g, (int)func_L24_25C118);
    GCSENEMY_StaticInitTroupe__FP25GCSENEMY_StaticTroupeDataPC8MobyFormPC14GCSFRAG_Config(g + 0x1C, g_gcs + 0x9C, (int)func_L24_25C0A8);
    GCSMINI_Reset__Fv();
}
