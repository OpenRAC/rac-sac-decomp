/* SetNodeSlotEven__FR15tPAUSEMENU_NODEUi -- 28 bytes.
 * LEVEL1.REL 0x09F790. Thirty placements share this body.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 28 bytes and differs at body byte 0.
 * The three stores are present. The compiler emits the add of 116 first.
 * Retail emits the add of 624 first, then 617, then 116.
 *
 * Reopen when a C form on gnu-ee-20261015:-O2 -G0 keeps the add of 624 first.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct Node {
    char pad[4];
    int low;
    int mid;
    char gap[188];
    int high;
} Node;

void SetNodeSlotEven__FR15tPAUSEMENU_NODEUi(Node *self, int slot)
{
    self->high = slot + 624;
    self->low = slot + 617;
    self->mid = slot + 116;
}
