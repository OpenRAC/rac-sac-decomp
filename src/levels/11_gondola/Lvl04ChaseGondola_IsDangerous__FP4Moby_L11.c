/* Lvl04ChaseGondola_IsDangerous__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the byte at offset 0x45 is non-zero.
 */

typedef struct State {
    char pad[0x45];
    unsigned char field;
} State;

int Lvl04ChaseGondola_IsDangerous__FP4Moby(State *self)
{
    return self->field != 0;
}
