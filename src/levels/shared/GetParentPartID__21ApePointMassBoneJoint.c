/* GetParentPartID__21ApePointMassBoneJoint -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x48.
 */

typedef struct State {
    char pad[0x48];
    int field;
} State;

int GetParentPartID__21ApePointMassBoneJoint(State *self)
{
    return self->field;
}
