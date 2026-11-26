/* GetInstance__13ApeAnimIKNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x68.
 */

typedef struct State {
    char pad[0x68];
    int field;
} State;

int GetInstance__13ApeAnimIKNode(State *self)
{
    return self->field;
}
