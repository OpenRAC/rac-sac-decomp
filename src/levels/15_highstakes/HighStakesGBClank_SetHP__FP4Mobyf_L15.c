/* HighStakesGBClank_SetHP__FP4Mobyf -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Node {
    int pad;
    float hp;
    float maxHp;
} Node;

typedef struct State {
    char pad[0x58];
    Node *vars;
} State;

void HighStakesGBClank_SetHP__FP4Mobyf(State *self, float hp)
{
    Node *n = self->vars;
    n->hp = hp;
    n->maxHp = hp; /* last-use first: swc1 0x8, delay 0x4 */
}
