/* GCS_CAM_SetTarget__FPC4VEC3 -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * A 12-byte vector copied into a global. The retail keeps the global's address
 * in $a3: the lui spells the high half 0x2F and the addiu the signed low half
 * -0x3434, so the address is 0x2ECBCC (the linker's %hi/%lo convention, not a
 * truncation). The block moves in three pieces: eight bytes unaligned
 * (ldl/ldr), then four bytes (lw/sw).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0F7468.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_L24_003A2EEC;

void GCS_CAM_SetTarget__FPC4VEC3(Vec3 *src)
{
    D_L24_003A2EEC = *src;
}
