/* GLOBALVARS_ReducePlayerDeaths__Fv -- LEVEL13.REL 0x036EA8, 256 bytes.
 *
 * Body translated from the retail module.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

typedef struct GlobalVars {
    char pad[0xEE4];
    unsigned char deaths[4];
} GlobalVars;

extern GlobalVars *pGV;
extern int G_levelId;

extern int func_021B70(int levelId);

void GLOBALVARS_ReducePlayerDeaths__Fv(void)
{
    int mode = func_021B70(G_levelId);

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
