/* SetLogicsError__14MemCardManagerPCc -- FE.REL 0x000268C8, 12 bytes.
 *
 * Body translated from the retail module.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

typedef struct MemCardManager {
    char pad[0xE0];
    unsigned char f;
} MemCardManager;

void SetLogicsError__14MemCardManagerPCc(MemCardManager *self, const char *msg)
{
    (void)msg;
    /* void so the store reuses $v0; leftover 1 is the observed return. */
    self->f = 1;
}
