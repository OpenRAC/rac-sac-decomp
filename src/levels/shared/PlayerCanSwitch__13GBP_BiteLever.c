/* PlayerCanSwitch__13GBP_BiteLever -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Leaf {
    char pad[0x1C];
    unsigned int value;
} Leaf;

typedef struct Mid {
    char pad[0xC];
    Leaf *leaf;
} Mid;

typedef struct State {
    char pad[4];
    Mid *mid;
} State;

int PlayerCanSwitch__13GBP_BiteLever(State *self)
{
    return self->mid->leaf->value >= 2u;
}
