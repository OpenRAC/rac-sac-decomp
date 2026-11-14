/* GLOBAL_GetFlagBit__FUiUc -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Reads one bit of the global flag array. The flags are one byte each, in a
 * table at offset 0x4E0 of the GLOBALVARS structure pointed to by the global
 * pGV. The index is a byte offset from the start of that table and the tested
 * bit is the requested bit of that byte. The address is formed in two steps:
 * pGV plus the index first, with the 0x4E0 offset left in the load offset.
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
