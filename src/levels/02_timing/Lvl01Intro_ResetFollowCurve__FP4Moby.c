/* Lvl01Intro_ResetFollowCurve__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Node {
    char pad[0x80];
    int word_80;
    char pad84[4];
    unsigned char byte_88;
} Node;

typedef struct State {
    char pad[0x58];
    Node *vars;
} State;

void Lvl01Intro_ResetFollowCurve__FP4Moby(State *self)
{
    Node *n = self->vars;
    n->word_80 = 0;
    n->byte_88 = 0; /* last-use first: sb 0x88, delay sw 0x80 */
}
