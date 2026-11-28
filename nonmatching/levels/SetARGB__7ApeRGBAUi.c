/* SetARGB__7ApeRGBAUi -- 32 bytes.
 * FE.REL 0x0D8DE8. Thirty-one placements share this body.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 32 bytes and differs at body byte 12.
 * The three shifts match: 24, then 8, then 16. Retail then stores the
 * shift-24 byte, the shift-8 byte, the shift-16 byte, and the plain byte
 * on the way out. The compiler stores the plain byte first and the
 * shift-16 byte on the way out.
 * A second spelling through a byte pointer stayed in the same mismatch.
 *
 * Reopen when a C form on gnu-ee-20261015:-O2 -G0 stores the shift-24 byte
 * before the plain byte.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct Color {
    unsigned char c0;
    unsigned char c1;
    unsigned char c2;
    unsigned char c3;
} Color;

void SetARGB__7ApeRGBAUi(Color *self, unsigned int color)
{
    self->c3 = color >> 24;
    self->c1 = color >> 8;
    self->c0 = color >> 16;
    self->c2 = color;
}
