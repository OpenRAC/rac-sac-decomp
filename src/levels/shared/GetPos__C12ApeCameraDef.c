/* GetPos__C12ApeCameraDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0xA0.
 */

typedef struct State {
    char pad[0xA0];
    int field[1];
} State;

int *GetPos__C12ApeCameraDef(State *self)
{
    return self->field;
}
