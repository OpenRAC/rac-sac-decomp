/* GetTexture__15AglMaterialBasei -- 16 bytes. FE.REL 0x0E2360.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 16 bytes. The first changed byte is 0x0E2365.
 * Returning one indexed word is the useful source.
 *
 * Reopen when another index expression matches on gnu-ee-20261015:-O2 -G0.
 * Do not reopen with inline assembly or a new compiler route.
 */

typedef struct State {
    char pad[0x14];
    int items[1];
} State;

int GetTexture__15AglMaterialBasei(State *self, int index)
{
    return self->items[index];
}
