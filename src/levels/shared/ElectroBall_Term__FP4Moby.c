/* ElectroBall_Term__FP4Moby -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Releases the two handles stored at +4 of the object's state block.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_16ABC8.c.
 */

extern void ShockBoltData_Free__FUi(void *a0);

void ElectroBall_Term__FP4Moby(char *object)
{
    void **p;
    unsigned int i;

    i = 0;
    p = (void **)(*(char **)(object + 0x58) + 4);
    do {
        ShockBoltData_Free__FUi(*p);
        i++;
        p++;
    } while (i < 2);
}
