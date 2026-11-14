/* GLOBALVARS_EnforceValidOnTempGameSettings__Fv -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
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
