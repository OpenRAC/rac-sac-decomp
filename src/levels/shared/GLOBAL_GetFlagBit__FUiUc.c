/* GLOBAL_GetFlagBit__FUiUc -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GLOBALVARS_s GLOBALVARS_s;

struct GLOBALVARS_s {
    unsigned char pad[0x4E0];
    unsigned char flags[0x100];
};

extern GLOBALVARS_s *GLOBALVARS_pGlobals;

unsigned int GLOBAL_GetFlagBit__FUiUc(unsigned int index, unsigned char bit)
{
    return GLOBALVARS_pGlobals->flags[index] & (1u << bit);
}
