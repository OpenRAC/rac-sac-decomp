/* GLOBALVARS_PlayerHasWonGame__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GLOBALVARS {
    int pad_00[7];
    int musicVolume;
    int fxVolume;
    int pad_24[0x3AC];
    int replayCount;
} GLOBALVARS;

extern GLOBALVARS *pGV;

void GLOBALVARS_PlayerHasWonGame__Fv(void)
{
    pGV->replayCount++;
}
