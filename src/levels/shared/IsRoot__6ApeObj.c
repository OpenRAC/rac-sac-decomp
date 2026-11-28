/* IsRoot__6ApeObj -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the unsigned word at offset 0xF0 is below 1.
 */

typedef struct State {
    char pad[0xF0];
    unsigned int field;
} State;

int IsRoot__6ApeObj(State *self)
{
    return self->field < 1;
}
