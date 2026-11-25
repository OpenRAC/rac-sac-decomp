/* BackgroundPersonSimpleLessThan__FP27BackgroundPersonSimpleActorT0 -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Compares one byte on two objects.
 */

typedef struct Actor {
    char pad[0x30];
    unsigned char field;
} Actor;

int BackgroundPersonSimpleLessThan__FP27BackgroundPersonSimpleActorT0(Actor *self, Actor *other)
{
    return self->field < other->field;
}
