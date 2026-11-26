/* BACKGSTREAMER_CLIENT_Unlock__F31eBACKGSTREAMER_CLIENT_LOCKTYPES -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Releases the global slot when it holds the given id.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_021368.c.
 */

extern int D_L01_0027E01C;

int BACKGSTREAMER_CLIENT_Unlock__F31eBACKGSTREAMER_CLIENT_LOCKTYPES(int id)
{
    if (D_L01_0027E01C == id) {
        D_L01_0027E01C = 0;
        return 1;
    }
    return 0;
}
