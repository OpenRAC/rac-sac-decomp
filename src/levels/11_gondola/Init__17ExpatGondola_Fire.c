/* Init__17ExpatGondola_Fire -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the receiver at offset 0xC.
 */

typedef struct State {
    char pad[0xC];
    struct State *field;
} State;

void Init__17ExpatGondola_Fire(State *self)
{
    self->field = self;
}
