/* GetType__15ApeCollisionDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0xBD.
 */

typedef struct State {
    char pad[0xBD];
    unsigned char field;
} State;

int GetType__15ApeCollisionDef(State *self)
{
    return self->field;
}
