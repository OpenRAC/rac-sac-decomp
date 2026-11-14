/* CHEAT_IsActive__FUi -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
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
