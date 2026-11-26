/* Init__10IdleSearchPC16IdleSearchConfigf -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores one integer and one float.
 */

typedef struct State {
    char pad[0xC];
    int low;
    float high;
} State;

void Init__10IdleSearchPC16IdleSearchConfigf(State *self, int count, float amount)
{
    self->low = count;
    self->high = amount;
}
