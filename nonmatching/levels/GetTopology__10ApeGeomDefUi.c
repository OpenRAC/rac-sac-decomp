/* GetTopology__10ApeGeomDefUi -- 16 bytes. FE.REL 0x0EC618.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 16 bytes. The first changed byte is 0x0EC61D.
 * Returning one indexed word is the useful source.
 *
 * Reopen when another index expression matches on gnu-ee-20261015:-O2 -G0.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct State {
    char pad[0x7C];
    struct Item { int value; char rest[0x4]; } items[1];
} State;

int GetTopology__10ApeGeomDefUi(State *self, int index)
{
    return self->items[index].value;
}
