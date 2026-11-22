/* FILEPACKER_GetNumberOfEntries__FP16tFILEPACKER_DATA -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the second word when the helper succeeds.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01F308.c.
 */

int FILEPACKER_isInited__FP16tFILEPACKER_DATA(int *);

int FILEPACKER_GetNumberOfEntries__FP16tFILEPACKER_DATA(int *p)
{
    if (FILEPACKER_isInited__FP16tFILEPACKER_DATA(p) == 0)
        return -1;
    return p[1];
}
