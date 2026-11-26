/* GetTime__C21ApeAnimProceduralNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x2C.
 */

typedef struct State {
    char pad[0x2C];
    float field;
} State;

float GetTime__C21ApeAnimProceduralNode(State *self)
{
    return self->field;
}
