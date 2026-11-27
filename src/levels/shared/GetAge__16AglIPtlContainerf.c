/* GetAge__16AglIPtlContainerf -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglIPtlContainer {
    char pad[0x4];
    float time;
} AglIPtlContainer;

float GetAge__16AglIPtlContainerf(AglIPtlContainer *self, float t)
{
    return self->time - t;
}
