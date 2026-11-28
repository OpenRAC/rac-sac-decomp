/* RestartJump__24ExpatGondola_GondolaJump -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the byte at offset 0x2C.
 */

typedef struct State {
    char pad[0x2C];
    unsigned char field;
} State;

void RestartJump__24ExpatGondola_GondolaJump(State *self)
{
    self->field = 0;
}
