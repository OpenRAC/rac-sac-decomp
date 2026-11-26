/* SetFilterMode__14AglTextureBase13AgxFilterModeN21 -- 28 bytes.
 * FE.REL 0x0E1E88. Thirty-one placements share this body.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 28 bytes and differs at body byte 4.
 * The opening load of the flags matches. Retail then stores the mip mode,
 * updates the flags, stores the min mode, and stores the mag mode on the
 * way out. The compiler stores the mag mode first and the flags last.
 * A second spelling that loaded the flags into a local stayed in the same
 * mismatch: the linked body was still 28 bytes and still differed at body
 * byte 4.
 *
 * Reopen when a C form on gnu-ee-20261015:-O2 -G0 stores the mip mode
 * before the mag mode.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct Tex {
    char pad[184];
    unsigned short min;
    unsigned short mag;
    unsigned short mip;
    char gap[6];
    unsigned short flags;
} Tex;

void SetFilterMode__14AglTextureBase13AgxFilterModeN21(Tex *self, unsigned short min, unsigned short mag, unsigned short mip)
{
    self->mip = mip;
    self->min = min;
    self->flags |= 1;
    self->mag = mag;
}
