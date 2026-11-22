/* GCSENEMY_RecoilMotorReset__FP32GCSENEMY_RecoilMotorInstanceDataPC26GCSENEMY_RecoilMotorConfig -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores one word and two 12-byte preset blocks into the object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0FD858.c.
 */

struct Vec3 {
    int x;
    int y;
    int z;
};

extern struct Vec3 G_LeftVector;
extern struct Vec3 G_AtVector;

void GCSENEMY_RecoilMotorReset__FP32GCSENEMY_RecoilMotorInstanceDataPC26GCSENEMY_RecoilMotorConfig(char *a0, int a1)
{
    *(int *)(a0 + 0) = a1;
    *(int *)(a0 + 4) = 0;
    *(int *)(a0 + 8) = 0;
    *(struct Vec3 *)(a0 + 0xC) = G_LeftVector;
    *(struct Vec3 *)(a0 + 0x18) = G_AtVector;
}
