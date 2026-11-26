/* HasGeometry__15ApeCollisionDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0xBE.
 */

typedef struct State {
    char pad[0xBE];
    unsigned char field;
} State;

int HasGeometry__15ApeCollisionDef(State *self)
{
    return self->field;
}
