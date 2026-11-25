/* SetJobError__14MemCardManagerPCc -- 12 bytes. FE.REL 0x0268D8.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 16 bytes and differs at 0x0268DA.
 * Storing a constant in one byte and returning that constant is the useful source.
 *
 * Reopen when a route already in config/toolchain.json emits a .text
 * of exactly 12 bytes and the pinned linker keeps .text at the retail
 * address, or when the interval is re-bounded. Do not reopen with
 * inline assembly or a new compiler route.
 */

typedef struct State {
    char pad[0xE0];
    unsigned char field;
} State;

int SetJobError__14MemCardManagerPCc(State *self)
{
    return self->field = 1;
}
