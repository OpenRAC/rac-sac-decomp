/* GetMesh__C11AglTopologyUi -- 16 bytes. FE.REL 0x0E1E08.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 16 bytes. The first changed byte is 0x0E1E0D.
 * Returning one indexed word is the useful source.
 *
 * Reopen when another index expression matches on gnu-ee-20261015:-O2 -G0.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct State {
    char pad[0x10];
    struct Item { int value; char rest[0x4]; } items[1];
} State;

int GetMesh__C11AglTopologyUi(State *self, int index)
{
    return self->items[index].value;
}
