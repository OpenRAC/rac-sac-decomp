/* DRAW_SetMaterialTexHandle__FUii -- 24 bytes. */

unsigned int DRAW_SetMaterialTexHandle__FUii(unsigned int n, int h)
{
    return (n & 0x000FFFFFu) | (h << 20);
}
