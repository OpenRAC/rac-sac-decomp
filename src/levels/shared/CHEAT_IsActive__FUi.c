/* CHEAT_IsActive__FUi -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tests the bit of the cheat index in the cheat flag word at offset 0x8E0 of
 * the object pointed to by pGV, and returns 1 or 0. The bit mask is built in a
 * local variable, which keeps the compiler from folding the test into a single
 * bit extraction (the retail keeps the full mask).
 */

typedef struct CHEAT_TABLE CHEAT_TABLE;

struct CHEAT_TABLE {
    unsigned int reserved_000[568];      /* 0x8E0 */
    unsigned int active_cheats;
};

extern CHEAT_TABLE *CHEAT_table;

unsigned int CHEAT_IsActive__FUi(unsigned int cheat_number)
{
    unsigned int mask;

    mask = 1u << cheat_number;
    return (CHEAT_table->active_cheats & mask) != 0;
}
