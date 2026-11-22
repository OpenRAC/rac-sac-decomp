/* ICONHORMENU_SetIconScissorArea__FP12tICONHORMENUP17HUD_BoundingBox16 -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sixteen bytes moved from $a1 to $a0+0xD0. The block is four floats
 * (four-byte alignment), so the compiler cuts it in two eight-byte pieces and
 * moves them unaligned: ldl/ldr then sdl/sdr, twice.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0D9120.c.
 */

typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

void ICONHORMENU_SetIconScissorArea__FP12tICONHORMENUP17HUD_BoundingBox16(V4 *dst, V4 *src)
{
    *(V4 *)((char *)dst + 0xD0) = *src;
}
