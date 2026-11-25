/* Active__8MobyGlow -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x1C.
 */

typedef struct State {
    char pad[0x1C];
    unsigned char field;
} State;

int Active__8MobyGlow(State *self)
{
    return self->field;
}
