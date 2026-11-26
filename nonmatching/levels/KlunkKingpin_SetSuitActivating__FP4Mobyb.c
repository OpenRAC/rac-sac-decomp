/* KlunkKingpin_SetSuitActivating__FP4Mobyb -- 16 bytes. LEVEL30.REL 0x0E5AE8. The first changed byte is 0x0E5AF0.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 20 bytes and differs at the address in the header.
 * The load and the argument store match. The cleared neighbor is not placed with the return.
 *
 * Reopen when another source on gnu-ee-20261015:-O2 -G0 stays 16 bytes.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct Node {
    char pad[0xD4];
    unsigned char low;
    unsigned char high;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void KlunkKingpin_SetSuitActivating__FP4Mobyb(State *self, int flag)
{
    self->field->high = flag;
    self->field->low = 0;
}
