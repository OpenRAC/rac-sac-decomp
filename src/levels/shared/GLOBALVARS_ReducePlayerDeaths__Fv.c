/* GLOBALVARS_ReducePlayerDeaths__Fv -- 256 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Depending on the game type of the current level, one of the byte death
 * counters of pGV is decreased by 4, or cleared if it is already below 5. The
 * cases are laid out in the retail order 0, 1, 3, 2, which is the switch order
 * that yields the retail branch table (case 0 uses field EE5, case 1 EE4, case
 * 3 EE6, case 2 EE7).
 */

typedef struct GlobalVars {
    char pad[0xEE4];
    unsigned char deaths[4];
} GlobalVars;

extern GlobalVars *pGV;
extern int G_levelId;

extern int func_L01_021B70(int levelId);

void GLOBALVARS_ReducePlayerDeaths__Fv(void)
{
    int mode = func_L01_021B70(G_levelId);

    switch (mode) {
    case 0: {
        unsigned char c = pGV->deaths[1];
        if (c < 5)
            pGV->deaths[1] = 0;
        else
            pGV->deaths[1] = c - 4;
        break;
    }
    case 1: {
        unsigned char c = pGV->deaths[0];
        if (c < 5)
            pGV->deaths[0] = 0;
        else
            pGV->deaths[0] = c - 4;
        break;
    }
    case 3: {
        unsigned char c = pGV->deaths[2];
        if (c < 5)
            pGV->deaths[2] = 0;
        else
            pGV->deaths[2] = c - 4;
        break;
    }
    case 2: {
        unsigned char c = pGV->deaths[3];
        if (c < 5)
            pGV->deaths[3] = 0;
        else
            pGV->deaths[3] = c - 4;
        break;
    }
    }
}
