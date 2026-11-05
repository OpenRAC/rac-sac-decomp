/* Waitress_GetExtraContentSize__Fv -- LEVEL13.REL 0x0010B458, 92 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   Fill a 6-word descriptor, call GetTransientDataExtraSize, then
 *   store the 4-byte-aligned (field0 + extra) into the module word
 *   at 0x0025FA18 and return it.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (sdk991111-sdkas:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

extern int GetTransientDataExtraSize__12StateMachine(void);
extern int g_WaitressExtraSize;

int Waitress_GetExtraContentSize__Fv(void)
{
    int desc[6];
    int extra;
    int total;

    desc[1] = 1;
    desc[4] = 4;
    desc[2] = 0x14;
    desc[3] = 0;
    desc[5] = 0x14;
    desc[0] = 0x14;
    extra = GetTransientDataExtraSize__12StateMachine();
    total = (desc[0] + extra + 3) & -4;
    g_WaitressExtraSize = total;
    return total;
}
