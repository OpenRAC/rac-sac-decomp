/* AttemptCelebrate__21StaticMidge_Celebrate -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 1.5f in the float at offset 0x10.
 */

typedef struct State {
    char pad[0x10];
    float field;
} State;

void AttemptCelebrate__21StaticMidge_Celebrate(State *self)
{
    self->field = 1.5f;
}
