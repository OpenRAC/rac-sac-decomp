/* IsLocalLight__C16ApeLightInstance -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the byte at offset 0x150 equals 2.
 */

typedef struct State {
    char pad[0x150];
    unsigned char field;
} State;

int IsLocalLight__C16ApeLightInstance(State *self)
{
    return self->field == 2;
}
