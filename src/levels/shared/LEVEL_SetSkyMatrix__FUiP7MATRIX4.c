/* LEVEL_SetSkyMatrix__FUiP7MATRIX4 -- 160 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Drops one 64-byte vertex block into the level's slot table, when the slot
 * number is inside the table.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/08_dayni_moon/LEVEL_08_017A88.c.
 */

typedef struct {
    float f[16];
} Block;

extern Block D_L01_0031A890[8];

void LEVEL_SetSkyMatrix__FUiP7MATRIX4(unsigned int slot, Block *src)
{
    if (slot < 8) {
        D_L01_0031A890[slot] = *src;
    }
}
