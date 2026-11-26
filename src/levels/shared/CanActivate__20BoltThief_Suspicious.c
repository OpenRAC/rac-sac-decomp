/* CanActivate__20BoltThief_Suspicious -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word is 1 or 2.
 */

typedef struct Leaf {
    char pad[16];
    unsigned int value;
} Leaf;

typedef struct Mid {
    Leaf *leaf;
} Mid;

typedef struct State {
    char pad[16];
    Mid *mid;
} State;

int CanActivate__20BoltThief_Suspicious(State *self)
{
    unsigned int value;

    value = self->mid->leaf->value;
    return (value - 1) < 2u;
}
