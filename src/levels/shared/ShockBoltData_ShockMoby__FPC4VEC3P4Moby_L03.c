/* ShockBoltData_ShockMoby__FPC4VEC3P4Moby -- 192 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_16B390.c.
 */

extern int ShockBoltData_Alloc__Ff(float value);
extern int ShockBoltData_GetPointer__FUi(int handle);
extern void MOBY_GetMobyTargetPos__FPC4MobyP4VEC3bT2(int a, int b, int c, int d);
extern void Electric_Start__FP13Electric_DataPC15Electric_ConfigPC4VEC3N22(int a, int b, int c, int d, int e);
extern char D_L03_00295520[];
extern char D_L03_002D6EF0[];

int ShockBoltData_ShockMoby__FPC4VEC3P4Moby(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = ShockBoltData_Alloc__Ff(1.0f);
    obj = ShockBoltData_GetPointer__FUi(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        MOBY_GetMobyTargetPos__FPC4MobyP4VEC3bT2(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_L03_00295520;
        Electric_Start__FP13Electric_DataPC15Electric_ConfigPC4VEC3N22(obj + 4, (int)D_L03_00295520, param_1, obj + 0x48,
                      (int)D_L03_002D6EF0);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
