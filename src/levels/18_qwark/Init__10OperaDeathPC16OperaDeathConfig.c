/* Init__10OperaDeathPC16OperaDeathConfig -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x20.
 */

typedef struct State {
    char pad[0x20];
    int field;
} State;

void Init__10OperaDeathPC16OperaDeathConfig(State *self, int value)
{
    self->field = value;
}
