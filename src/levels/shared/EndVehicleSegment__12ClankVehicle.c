/* EndVehicleSegment__12ClankVehicle -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets bits in the word at offset 0x74.
 */

typedef struct State {
    char pad[0x74];
    unsigned field;
} State;

void EndVehicleSegment__12ClankVehicle(State *self)
{
    self->field |= 65;
}
