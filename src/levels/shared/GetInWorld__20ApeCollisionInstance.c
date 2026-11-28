/* GetInWorld__20ApeCollisionInstance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x68.
 */

typedef struct State {
    char pad[0x68];
    unsigned char field;
} State;

int GetInWorld__20ApeCollisionInstance(State *self)
{
    return self->field;
}
