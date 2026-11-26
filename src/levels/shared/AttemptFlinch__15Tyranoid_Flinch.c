/* AttemptFlinch__15Tyranoid_Flinch -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 1.5f in the float at offset 0x14.
 */

typedef struct State {
    char pad[0x14];
    float field;
} State;

void AttemptFlinch__15Tyranoid_Flinch(State *self)
{
    self->field = 1.5f;
}
