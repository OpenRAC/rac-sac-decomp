/* Init__21CasinoTouristPlayAnimPC25ReallyBasicPlayAnimConfigP5StateT2 -- 16 bytes. LEVEL13.REL 0x0C3AC0.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 16 bytes. The linked body differs at the address in the header.
 * Storing the three arguments from the lower offset upward is the useful source.
 *
 * Reopen when another assignment order matches on gnu-ee-20261015:-O2 -G0.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct State {
    char pad_C[0xC];
    int at_C;
    int at_10;
    int at_14;
} State;

void Init__21CasinoTouristPlayAnimPC25ReallyBasicPlayAnimConfigP5StateT2(State *self, int first, int second, int third)
{
    self->at_C = first;
    self->at_10 = second;
    self->at_14 = third;
}
