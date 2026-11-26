/* Set__10AglVtxRGBAUi -- 32 bytes.
 * FE.REL 0x0E2B80. Thirty-one placements share this body.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 32 bytes and differs at body byte 1.
 * Retail shifts by 24, then 16, then 8. The compiler shifts by 8 first.
 * A second spelling that named the three shifted bytes first stayed in the
 * same mismatch.
 *
 * Reopen when a C form on gnu-ee-20261015:-O2 -G0 keeps the shift of 24 first.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct Color {
    unsigned char c0;
    unsigned char c1;
    unsigned char c2;
    unsigned char c3;
} Color;

void Set__10AglVtxRGBAUi(Color *self, unsigned int color)
{
    self->c3 = color;
    self->c0 = color >> 24;
    self->c1 = color >> 16;
    self->c2 = color >> 8;
}
