/* BACKGSTREAMER_CLIENT_Lock__F31eBACKGSTREAMER_CLIENT_LOCKTYPES -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_021348.c.
 */

extern int D_L01_0027E01C;

int BACKGSTREAMER_CLIENT_Lock__F31eBACKGSTREAMER_CLIENT_LOCKTYPES(void *p)
{
    if (D_L01_0027E01C == 0) {
        D_L01_0027E01C = (int)p;
        return 1;
    }
    return 0;
}
