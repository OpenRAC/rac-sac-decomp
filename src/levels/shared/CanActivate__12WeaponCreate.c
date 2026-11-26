/* CanActivate__12WeaponCreate -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word equals 2.
 */

typedef struct Leaf {
    char pad[0x368];
    int value;
} Leaf;

typedef struct Mid {
    char pad[0x10];
    Leaf *leaf;
} Mid;

typedef struct State {
    char pad[0x4];
    Mid *mid;
} State;

int CanActivate__12WeaponCreate(State *self)
{
    return self->mid->leaf->value == 2;
}
