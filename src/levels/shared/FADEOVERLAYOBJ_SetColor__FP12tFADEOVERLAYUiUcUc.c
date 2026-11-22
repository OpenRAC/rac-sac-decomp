/* FADEOVERLAYOBJ_SetColor__FP12tFADEOVERLAYUiUcUc -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores a packed word split across fields and clears a flag byte.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0A60C8.c.
 */

typedef struct { unsigned int a0; unsigned char b4; unsigned char b5; unsigned char p[2]; unsigned int a8; unsigned int aC; unsigned int a10; } S;
void FADEOVERLAYOBJ_SetColor__FP12tFADEOVERLAYUiUcUc(S *o, unsigned int packed, int bv, unsigned int alpha)
{
 unsigned int h = packed >> 24;
 o->b5 = bv;
 o->a10 = alpha & 0xFF;
 o->aC = packed & 0xFFFFFF;
 o->a8 = h;
 o->b4 = 0;
 o->a0 = h;
}
