/* GetObjID__20ApeCollisionInstance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x64.
 */

typedef struct State {
    char pad[0x64];
    int field;
} State;

int GetObjID__20ApeCollisionInstance(State *self)
{
    return self->field;
}
