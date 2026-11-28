/* HEROSKIN_EndLoadSinglePlayerSkin__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct SkinObj {
    char pad[0x2F8];
    unsigned char byte;
} SkinObj;

extern SkinObj *D_FE_000F06F4;
extern unsigned char D_FE_000F4D4C;

void HEROSKIN_EndLoadSinglePlayerSkin__Fv(void)
{
    D_FE_000F06F4->byte = D_FE_000F4D4C;
}
