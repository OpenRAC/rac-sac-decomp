/* GadgetBotScanner_Activate__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Node {
    int slot;
} Node;

typedef struct State {
    char pad[0x58];
    Node *vars;
} State;

void GadgetBotScanner_Activate__FP4Moby(State *self)
{
    self->vars->slot = 1;
}
