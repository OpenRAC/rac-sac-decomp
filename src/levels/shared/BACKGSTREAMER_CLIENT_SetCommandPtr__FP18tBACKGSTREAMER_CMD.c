/* BACKGSTREAMER_CLIENT_SetCommandPtr__FP18tBACKGSTREAMER_CMD -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_021390.c.
 */

extern int D_L01_0027E018;

int BACKGSTREAMER_CLIENT_SetCommandPtr__FP18tBACKGSTREAMER_CMD(int a0)
{
    if (a0) {
        D_L01_0027E018 = a0;
        return 1;
    }
    return 0;
}
