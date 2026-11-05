/* __do_global_dtors_LEVEL13_001B26D8 -- LEVEL13.REL 0x001B26D8, 84 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   EE-GCC 2.9 crt: walk the destructor list.  The cursor lives at
 *   0x00270D28 (lui 0x27 / lw 0xD28).  Increment before the call so
 *   the load of the entry is lw -4(cursor).
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (sdk991111-sdkas:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

typedef void (*dtor_t)(void);

extern dtor_t *__dtor_list;

void __do_global_dtors(void)
{
    while (*__dtor_list) {
        __dtor_list++;
        (*(__dtor_list - 1))();
    }
}
