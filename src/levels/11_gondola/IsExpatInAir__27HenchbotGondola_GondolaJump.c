/* IsExpatInAir__27HenchbotGondola_GondolaJump -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word is 1 or 2.
 */

typedef struct Leaf {
    char pad[8];
    unsigned int value;
} Leaf;

typedef struct Mid {
    char pad[12];
    Leaf *leaf;
} Mid;

typedef struct State {
    char pad[4];
    Mid *mid;
} State;

int IsExpatInAir__27HenchbotGondola_GondolaJump(State *self)
{
    unsigned int value;

    value = self->mid->leaf->value;
    return (value - 1) < 2u;
}
