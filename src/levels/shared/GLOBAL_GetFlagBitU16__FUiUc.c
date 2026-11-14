/* GLOBAL_GetFlagBitU16__FUiUc -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * 16-bit variant of GLOBAL_GetFlagBit: the flag table of the pGV block is read
 * as a halfword at the byte offset given by the index, and the result is
 * masked with 1 << bit.
 */

typedef struct GLOBALVARS GLOBALVARS;

struct GLOBALVARS {
    unsigned char unknown_000[0x4E0];
    unsigned char flags[1];
};

extern GLOBALVARS *pGV;

unsigned int GLOBAL_GetFlagBitU16__FUiUc(unsigned int index, unsigned char bit)
{
    return *(unsigned short *)(pGV->flags + index) & (1u << bit);
}
