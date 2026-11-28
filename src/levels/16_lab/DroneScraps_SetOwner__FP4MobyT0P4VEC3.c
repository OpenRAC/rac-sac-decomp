/* DroneScraps_SetOwner__FP4MobyT0P4VEC3 -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Node {
    void *owner;
    void *vec;
} Node;

typedef struct State {
    char pad[0x58];
    Node *vars;
} State;

void DroneScraps_SetOwner__FP4MobyT0P4VEC3(State *self, void *owner, void *vec)
{
    Node *n = self->vars;
    n->owner = owner;
    n->vec = vec; /* last-use first: sw a2+4, delay a1+0 */
}
