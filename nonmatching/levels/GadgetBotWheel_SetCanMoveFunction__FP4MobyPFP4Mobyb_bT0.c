/* GadgetBotWheel_SetCanMoveFunction__FP4MobyPFP4Mobyb_bT0 -- 16 bytes. LEVEL4.REL 0x0F27B8. The first changed byte is 0x0F27C0.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 20 bytes and differs at the address in the header.
 * The load and the higher store match. The lower store is not placed with the return.
 *
 * Reopen when another source on gnu-ee-20261015:-O2 -G0 stays 16 bytes.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct Node {
    char pad[0x4];
    int low;
    int high;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void GadgetBotWheel_SetCanMoveFunction__FP4MobyPFP4Mobyb_bT0(State *self, int first, int second)
{
    self->field->high = second;
    self->field->low = first;
}
