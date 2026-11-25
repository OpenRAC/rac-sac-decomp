/* GetShape__15ApeCollisionDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0xBC.
 */

typedef struct State {
    char pad[0xBC];
    unsigned char field;
} State;

int GetShape__15ApeCollisionDef(State *self)
{
    return self->field;
}
