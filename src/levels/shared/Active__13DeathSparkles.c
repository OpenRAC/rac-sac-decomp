/* Active__13DeathSparkles -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x10.
 */

typedef struct State {
    char pad[0x10];
    unsigned char field;
} State;

int Active__13DeathSparkles(State *self)
{
    return self->field;
}
