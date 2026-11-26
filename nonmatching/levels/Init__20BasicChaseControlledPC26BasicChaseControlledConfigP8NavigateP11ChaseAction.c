/* Init__20BasicChaseControlledPC26BasicChaseControlledConfigP8NavigateP11ChaseAction -- 16 bytes. LEVEL1.REL 0x237C10.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * First difference: the linked body is 16 bytes. The first changed byte is 0x237C14.
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

void Init__20BasicChaseControlledPC26BasicChaseControlledConfigP8NavigateP11ChaseAction(State *self, int first, int second, int third)
{
    self->at_C = second;
    self->at_10 = first;
    self->at_14 = third;
}
