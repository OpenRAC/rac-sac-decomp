/* RegisterAnimMatrix__6ApeObjP10ApeAnimMtx -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0xA0.
 */

typedef struct State {
    char pad[0xA0];
    int field;
} State;

void RegisterAnimMatrix__6ApeObjP10ApeAnimMtx(State *self, int value)
{
    self->field = value;
}
