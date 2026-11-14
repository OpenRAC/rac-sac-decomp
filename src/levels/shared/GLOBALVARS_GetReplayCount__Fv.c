/* GLOBALVARS_GetReplayCount__Fv -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the replay counter of the global variables, capped at three. The
 * counter lives in the structure pointed to by pGV. The two candidates (the
 * counter and the constant three) live in memory, and the retail selects the
 * address of the one it keeps before the final load, so the source selects the
 * address, not the value. The constant three is a frame local written through
 * its pointer before the counter is read.
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
