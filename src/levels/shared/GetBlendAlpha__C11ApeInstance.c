/* GetBlendAlpha__C11ApeInstance -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the bit field at offset 0xA0.
 */

typedef struct State {
    char pad[0xA0];
    unsigned long long before : 41;
    unsigned flag : 8;
} State;

int GetBlendAlpha__C11ApeInstance(State *self)
{
    return self->flag;
}
