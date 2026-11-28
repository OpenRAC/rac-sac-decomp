/* HandleDamage__13GadgetBotFallf14MobyDamageType18MobyDamageStrengthPC4VEC4T4P4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Mid {
    char pad[4];
    void *owner;
} Mid;

typedef struct State {
    char pad[4];
    Mid *mid;
} State;

int HandleDamage__13GadgetBotFallf14MobyDamageType18MobyDamageStrengthPC4VEC4T4P4Moby(
    State *self)
{
    return (self->mid->owner == self) ? 0 : -1;
}
