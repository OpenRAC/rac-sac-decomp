/* SetWrapMode__14AglTextureBase14AgxAddressModeN21 -- 28 bytes.
 * FE.REL 0x0E1EA8. Thirty-one placements share this body.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 28 bytes and differs at body byte 4.
 * The opening load of the flags matches. Retail then stores the r mode,
 * updates the flags, stores the s mode, and stores the t mode on the way
 * out. The compiler stores the t mode first and the flags last.
 * A second spelling that loaded the flags into a local stayed in the same
 * mismatch: the linked body was still 28 bytes and still differed at body
 * byte 4.
 *
 * Reopen when a C form on gnu-ee-20261015:-O2 -G0 stores the r mode before
 * the t mode.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct Tex {
    char pad[190];
    unsigned short s;
    unsigned short t;
    unsigned short r;
    unsigned short flags;
} Tex;

void SetWrapMode__14AglTextureBase14AgxAddressModeN21(Tex *self, unsigned short s, unsigned short t, unsigned short r)
{
    self->r = r;
    self->s = s;
    self->flags |= 2;
    self->t = t;
}
