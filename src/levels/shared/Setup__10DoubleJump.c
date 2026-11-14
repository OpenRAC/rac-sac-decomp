/* Setup__10DoubleJump -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DoubleJump {
    char pad[0xC];
    int field;
} DoubleJump;

void Setup__10DoubleJump(DoubleJump *self)
{
    self->field = 0;
}
