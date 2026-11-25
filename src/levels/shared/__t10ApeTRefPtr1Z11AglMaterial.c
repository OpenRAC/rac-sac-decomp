/* __t10ApeTRefPtr1Z11AglMaterial -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the word at offset 0 and returns the receiver.
 */

typedef struct State {
    int field;
} State;

State *__t10ApeTRefPtr1Z11AglMaterial(State *self)
{
    self->field = 0;
    return self;
}
