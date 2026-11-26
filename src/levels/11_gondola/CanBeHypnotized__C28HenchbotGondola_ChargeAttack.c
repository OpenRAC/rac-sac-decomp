/* CanBeHypnotized__C28HenchbotGondola_ChargeAttack -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word is not 5.
 */

typedef struct Leaf {
    char pad[12];
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

int CanBeHypnotized__C28HenchbotGondola_ChargeAttack(State *self)
{
    return self->mid->leaf->value != 5;
}
