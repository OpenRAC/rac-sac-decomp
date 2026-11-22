/* FILEPACKER_getData__FP16tFILEPACKER_DATAi -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns a word from an indexed 8-byte table entry after a count check.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01F1A0.c.
 */

extern int FILEPACKER_isInited__FP16tFILEPACKER_DATA(void *);

int FILEPACKER_getData__FP16tFILEPACKER_DATAi(void *object, int index)
{
    if (index == 0) {
        return 0;
    }
    if (FILEPACKER_isInited__FP16tFILEPACKER_DATA(object) == 0) {
        return 0;
    }
    if (*(int *)((char *)object + 4) < index) {
        return 0;
    }
    return *(int *)(*(char **)object + (index << 3) + 8);
}
