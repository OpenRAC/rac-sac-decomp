/* func_L01_17DD18 -- 144 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/05_medical_outpost/LEVEL_05_049E80.c.
 */

extern float D_L01_003B5E40[];
extern unsigned char D_L01_003B5E80[];

void func_L01_17DD18(int v, int b, int index, int *arr, int n, float f)
{
    for (n = n - 1; index < n; n--) {
        arr[n] = arr[n - 1];
        D_L01_003B5E40[n] = D_L01_003B5E40[n - 1];
        D_L01_003B5E80[n] = D_L01_003B5E80[n - 1];
    }
    arr[index] = v;
    D_L01_003B5E40[index] = f;
    D_L01_003B5E80[index] = b;
}
