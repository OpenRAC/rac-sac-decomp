/* FADEOVERLAYOBJ_IsAtFinalUpAlpha__FP12tFADEOVERLAY -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_00AC78.c.
 */

int FADEOVERLAYOBJ_IsAtFinalUpAlpha__FP12tFADEOVERLAY(int *p)
{
    return (p[2] ^ p[0]) == 0;
}
