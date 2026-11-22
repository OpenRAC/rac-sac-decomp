/* GCSHIP_AnimIsDone__Fv -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * 116 bytes, 2 placements. A due-time test: the handle comes from the first
 * helper; the second gives a value that is compared with the third plus one
 * frame (1/30 s).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1347F0.c.
 */

extern int GCSHIP_AnimGetActive__Fv(void);
extern float GCSHIP_AnimGetTime__Fv(void);
extern float GCSHIP_AnimGetDuration__F10GCS_AnimID(int handle);

int GCSHIP_AnimIsDone__Fv(void)
{
    int handle;
    float a;
    float b;
    int r;

    handle = GCSHIP_AnimGetActive__Fv();
    if (handle == -1)
        return 1;
    a = GCSHIP_AnimGetTime__Fv();
    b = GCSHIP_AnimGetDuration__F10GCS_AnimID(handle);
    a = a + 0.033333335f;
    r = 1;
    if (b <= a) {
    } else {
        r = 0;
    }
    return r;
}
