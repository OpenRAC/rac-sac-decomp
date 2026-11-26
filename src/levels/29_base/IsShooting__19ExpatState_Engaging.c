/* IsShooting__19ExpatState_Engaging -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Compares the value at offset 0x24.
 */

typedef struct State {
    char pad[0x24];
    int field;
} State;

int IsShooting__19ExpatState_Engaging(State *self)
{
    return (unsigned)(self->field - 3) < 3u;
}
