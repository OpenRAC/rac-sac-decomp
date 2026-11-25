/* BOLTCRANK_ExitState__FP7RATCHET -- 16 bytes. LEVEL3.REL 0x1341C8.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 16 bytes and differs at the address in the header.
 * Clearing the three words from the lower offset upward is the useful source.
 * The opposite assignment order also differs.
 *
 * Reopen when another assignment order matches on gnu-ee-20261015:-O2 -G0.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct State {
    char pad_B58[0xB58];
    int at_B58;
    char pad_B7C[0x20];
    int at_B7C;
    int at_B80;
} State;

void BOLTCRANK_ExitState__FP7RATCHET(State *self)
{
    self->at_B58 = 0;
    self->at_B7C = 0;
    self->at_B80 = 0;
}
