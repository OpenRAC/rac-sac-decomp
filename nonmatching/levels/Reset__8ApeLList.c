/* Reset__8ApeLList -- 16 bytes. FE.REL 0x0D8DD0. The first changed byte is 0x0D8DD4.
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
    int at_0;
    int at_4;
    int at_8;
} State;

void Reset__8ApeLList(State *self)
{
    self->at_0 = 0;
    self->at_4 = 0;
    self->at_8 = 0;
}
