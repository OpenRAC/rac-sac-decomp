/* Init__19Amoeboid_SuspiciousPC24AmoeboidSuspiciousConfigP8Navigate -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the two arguments at offsets 0xC and 0x10.
 */

typedef struct State {
    char pad[0xC];
    int first;
    int second;
} State;

void Init__19Amoeboid_SuspiciousPC24AmoeboidSuspiciousConfigP8Navigate(State *self, int first, int second)
{
    self->first = first;
    self->second = second;
}
