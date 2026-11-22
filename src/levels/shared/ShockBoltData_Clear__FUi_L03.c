/* ShockBoltData_Clear__FUi -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Retained attempt body.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_16B020.c.
 */

extern char *ShockBoltData_GetPointer__FUi(void *object);
extern void Electric_Stop__FP13Electric_Data(char *record);

void ShockBoltData_Clear__FUi(void *object)
{
    char *record = ShockBoltData_GetPointer__FUi(object);
    if (record != 0) {
        Electric_Stop__FP13Electric_Data(record + 4);
        *(int *)(record + 0x40) = 0;
        *(int *)(record + 0x44) = 0;
        *(int *)(record + 0x64) = 0;
        *(int *)(record + 0x68) = 1;
    }
}
