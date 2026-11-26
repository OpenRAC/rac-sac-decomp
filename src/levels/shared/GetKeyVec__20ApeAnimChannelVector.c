/* GetKeyVec__20ApeAnimChannelVector -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x30.
 */

typedef struct State {
    char pad[0x30];
    int field[1];
} State;

int *GetKeyVec__20ApeAnimChannelVector(State *self)
{
    return self->field;
}
