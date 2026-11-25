/* ResetSpawns__12ChuuninClone -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the constant 3 in the byte at offset 0x18.
 */

typedef struct State {
    char pad[0x18];
    unsigned char field;
} State;

void ResetSpawns__12ChuuninClone(State *self)
{
    self->field = 3;
}
