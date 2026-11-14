/* GLOBALVARS_GetReplayCount__Fv -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GLOBALVARS GLOBALVARS;

struct GLOBALVARS {
    int pad_00[7];
    int musicVolume;                 /* 0x1C */
    int fxVolume;                    /* 0x20 */
    int pad_24[0x3AC];
    int replayCount;                 /* 0xED4 */
};

extern GLOBALVARS *pGV;

int GLOBALVARS_GetReplayCount__Fv(void)
{
    int three;
    int *limit = &three;
    int *count;

    *limit = 3;
    count = (pGV->replayCount < three) ? &pGV->replayCount : limit;
    return *count;
}
