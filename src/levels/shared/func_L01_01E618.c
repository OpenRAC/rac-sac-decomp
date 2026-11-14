/* func_L01_01E618 -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned char u8;
typedef unsigned int u32;

typedef struct GlobalVars GlobalVars;

extern GlobalVars *pGV;
extern u32 G_levelId;

extern void GLOBALVARS_RestoreLevelData__FUi(u32 levelId);

void func_L01_01E618(void)
{
    *(u32 *)((u8 *)pGV + 0xECC) = G_levelId;
    *(u8 *)((u8 *)pGV + 0xF755) = 0;
    GLOBALVARS_RestoreLevelData__FUi(G_levelId);
}
