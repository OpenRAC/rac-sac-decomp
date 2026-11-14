/* GLOBALVARS_ReducePlayerDeaths__Fv -- 256 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
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
