/* GetPass2BlendMode__15AglMaterialBase -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the low bits of the word at offset 0x88.
 */

typedef struct State {
    char pad[0x88];
    int field;
} State;

int GetPass2BlendMode__15AglMaterialBase(State *self)
{
    return self->field & 15;
}
