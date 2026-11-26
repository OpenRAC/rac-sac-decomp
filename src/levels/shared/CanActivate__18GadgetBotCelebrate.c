/* CanActivate__18GadgetBotCelebrate -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the unsigned word at offset 0xC is below 1.
 */

typedef struct State {
    char pad[0xC];
    unsigned int field;
} State;

int CanActivate__18GadgetBotCelebrate(State *self)
{
    return self->field < 1;
}
