/* PAUSEMODE_RequestPreviousPauseScreen__Fv -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * When the global handle is set, runs the handler on it; returns whether it
 * was set.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0BCB20.c.
 */

extern int D_FE_001448F4;
extern int PAUSEMODE_RequestScreen__FUi(int a0);

int PAUSEMODE_RequestPreviousPauseScreen__Fv(void)
{
    int handle;

    handle = D_FE_001448F4;
    if (handle != 0) {
        PAUSEMODE_RequestScreen__FUi(handle);
        return 1;
    }
    return 0;
}
