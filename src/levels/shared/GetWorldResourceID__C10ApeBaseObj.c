/* GetWorldResourceID__C10ApeBaseObj -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the bit field at offset 0x4.
 */

typedef struct State {
    char pad[0x4];
    unsigned before : 22;
    unsigned flag : 4;
} State;

int GetWorldResourceID__C10ApeBaseObj(State *self)
{
    return self->flag;
}
