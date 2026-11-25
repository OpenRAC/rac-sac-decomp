/* sceVif1PkReserve -- 20 bytes. FE.REL 0x0CAD28.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 20 bytes and differs at body byte 9.
 * The first eight bytes match. The compiler keeps the advanced cursor in
 * the pointer that was loaded. Retail keeps that cursor in the count argument.
 * Adding the count directly, through a temporary, through a byte pointer,
 * and by assigning the sum back into the count all produce the same body.
 *
 * Reopen when a C form on gnu-ee-20261015:-O2 -G0 keeps the advanced cursor
 * in the count argument.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct State {
    int *ptr;
} State;

void sceVif1PkReserve(State *self, int count)
{
    self->ptr += count;
}
