/* Stop__25AglPostProcScreenWarpBase -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the constant 1 in the byte at offset 0x166C.
 */

typedef struct State {
    char pad[0x166C];
    unsigned char field;
} State;

void Stop__25AglPostProcScreenWarpBase(State *self)
{
    self->field = 1;
}
