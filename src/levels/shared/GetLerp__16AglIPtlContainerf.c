/* GetLerp__16AglIPtlContainerf -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns t divided by the duration reached through the first pointer.
 * The lone nop before div.s is contextual division padding of the load
 * (profile divpad-contextuel:-O2 -G0).
 */

typedef struct Props {
    char pad[4];
    float duration;
} Props;

typedef struct State {
    Props *props;
} State;

float GetLerp__16AglIPtlContainerf(State *self, float t)
{
    return t / self->props->duration;
}
