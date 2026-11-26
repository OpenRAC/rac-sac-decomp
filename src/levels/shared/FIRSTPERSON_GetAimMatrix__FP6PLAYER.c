/* FIRSTPERSON_GetAimMatrix__FP6PLAYER -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x5B8.
 */

typedef struct State {
    char pad[0x5B8];
    int field[1];
} State;

int *FIRSTPERSON_GetAimMatrix__FP6PLAYER(State *self)
{
    return self->field;
}
