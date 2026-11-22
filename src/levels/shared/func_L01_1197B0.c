/* func_L01_1197B0 -- 180 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1CCF50.c.
 */

extern void *func_L01_118E70(float *out, void *self);
typedef struct { char pad[0x14]; char *head; } GlobalList;
extern GlobalList g_crateShared;

void func_L01_1197B0(char *self)
{
    float result[4];
    unsigned char original;
    unsigned char flags;
    int previous_bit;
    int current_bit;
    void *moved;
    original = *(unsigned char *)(self + 0x78);
    previous_bit = original & 2;
    *(unsigned char *)(self + 0x78) = original & 0xf9;
    moved = func_L01_118E70(result, self);
    if (result[0] != 0.0f) {
        flags = *(unsigned char *)(self + 0x78) | 2;
        *(unsigned char *)(self + 0x78) = flags;
        if (moved != 0) {
            *(void **)(self + 0x60) = moved;
            *(unsigned char *)(self + 0x78) = flags | 4;
        } else
            *(float *)(self + 0x60) = *(float *)(self + 0x34) + result[0];
    }
    current_bit = *(unsigned char *)(self + 0x78) & 2;
    if (previous_bit == 0 && current_bit != 0) {
        *(char **)(self + 0x6c) = g_crateShared.head;
        g_crateShared.head = self;
        *(int *)(self + 0x74) = 0;
    }
}



