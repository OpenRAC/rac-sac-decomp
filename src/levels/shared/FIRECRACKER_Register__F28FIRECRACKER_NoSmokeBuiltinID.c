/* FIRECRACKER_Register__F28FIRECRACKER_NoSmokeBuiltinID -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0F0430.c.
 */

extern unsigned char g_firecracker_nosmoke[];
extern int D_L01_003B43A8[];
extern void func_L01_16AFB8(void *, void *);
extern void FIRECRACKER_Register__FP25FIRECRACKER_NoSmokeTroupeP25FIRECRACKER_NoSmokeConfigPC20FIRECRACKER_Material(char *, int, void *);

void FIRECRACKER_Register__F28FIRECRACKER_NoSmokeBuiltinID(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (g_firecracker_nosmoke[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_L01_003B43A8 + param_1 * 0x24);
        v = *p;
        func_L01_16AFB8(local, p);
        FIRECRACKER_Register__FP25FIRECRACKER_NoSmokeTroupeP25FIRECRACKER_NoSmokeConfigPC20FIRECRACKER_Material(g_firecracker_nosmoke + param_1 * 0x34 + 4, v, local);
        g_firecracker_nosmoke[param_1 * 0x34] = 1;
    }
}
