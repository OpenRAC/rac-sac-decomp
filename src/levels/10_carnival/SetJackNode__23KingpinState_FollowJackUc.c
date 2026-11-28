/* SetJackNode__23KingpinState_FollowJackUc -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores one byte through two pointers.
 */

typedef struct Leaf {
    unsigned char value;
} Leaf;

typedef struct Node {
    char pad[0xC];
    Leaf *leaf;
} Node;

typedef struct State {
    char pad[0x4];
    Node *field;
} State;

void SetJackNode__23KingpinState_FollowJackUc(State *self, int flag)
{
    self->field->leaf->value = flag;
}
