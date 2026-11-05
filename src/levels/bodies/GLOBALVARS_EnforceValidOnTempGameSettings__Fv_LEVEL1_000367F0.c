/* GLOBALVARS_EnforceValidOnTempGameSettings__Fv_LEVEL1_000367F0 -- LEVEL1.REL 0x000367F0, 152 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   GLOBALVARS_EnforceValidOnTempGameSettings__Fv -- LEVEL1.REL 0x000367F0, 152 bytes.
 *   Same authored form as FE.REL 0x000095F8.  Measured exact at this
 *   placement with gnu-ee-20261015:-O2 -G0.
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
};

extern GLOBALVARS *pGV;

void GLOBALVARS_EnforceValidOnTempGameSettings__Fv(void)
{
    {
        int zero, hi;
        int *low = &zero;
        int *high = &hi;
        int *p;
        int value;
        int *field;
        int result;

        *low = 0;
        *high = 255;
        value = pGV->musicVolume;
        field = &pGV->musicVolume;
        p = (value < 0) ? low : ((value > hi) ? high : field);
        result = *p;
        *(int *)((char *)pGV + 0x1C) = result;
    }
    {
        int zero, hi;
        int *low = &zero;
        int *high = &hi;
        int *p;
        int value;
        int *field;

        *low = 0;
        *high = 255;
        value = pGV->fxVolume;
        field = &pGV->fxVolume;
        p = (value < 0) ? low : ((value > hi) ? high : field);
        pGV->fxVolume = *p;
    }
}
