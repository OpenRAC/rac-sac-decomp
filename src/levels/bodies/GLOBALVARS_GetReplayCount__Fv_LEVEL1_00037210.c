/* GLOBALVARS_GetReplayCount__Fv_LEVEL1_00037210 -- LEVEL1.REL 0x00037210, 48 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   GLOBALVARS_GetReplayCount__Fv -- FE.REL 0x00009960, 48 bytes.
 *   The retail returns the replay counter of the global variables, capped at
 *   three.  The two candidates live in memory and the retail selects the
 *   ADDRESS of the one it keeps (movz) before the final load.  The constant
 *   three is a frame local written through its pointer before the counter is
 *   read.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
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
