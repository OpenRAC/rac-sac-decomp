/* SetHasGeometry__15ApeCollisionDefb -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument as a byte at offset 0xBE.
 */

typedef struct State {
    char pad[0xBE];
    unsigned char field;
} State;

void SetHasGeometry__15ApeCollisionDefb(State *self, int value)
{
    self->field = value;
}
