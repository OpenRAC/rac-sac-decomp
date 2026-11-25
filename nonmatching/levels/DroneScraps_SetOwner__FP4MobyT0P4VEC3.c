/* DroneScraps_SetOwner__FP4MobyT0P4VEC3 -- 16 bytes. LEVEL16.REL 0x0E1C60. The first changed byte is 0x0E1C68.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 20 bytes and differs at the address in the header.
 * The load and the higher store match. The lower store is not placed with the return.
 *
 * Reopen when another source on gnu-ee-20261015:-O2 -G0 stays 16 bytes.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct Node {
    int low;
    int high;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void DroneScraps_SetOwner__FP4MobyT0P4VEC3(State *self, int first, int second)
{
    self->field->high = second;
    self->field->low = first;
}
