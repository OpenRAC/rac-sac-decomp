/* GLOBAL_GetFlagBitU32__FUiUi -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GLOBALVARS GLOBALVARS;

struct GLOBALVARS {
    unsigned char unknown_000[0x4E0];
    unsigned char flags[1];
};

extern GLOBALVARS *pGV;

unsigned int GLOBAL_GetFlagBitU32__FUiUi(unsigned int index, unsigned int bit)
{
    return *(unsigned int *)(pGV->flags + index) & (1u << bit);
}
