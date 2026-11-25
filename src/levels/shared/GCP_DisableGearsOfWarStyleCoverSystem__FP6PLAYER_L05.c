/* GCP_DisableGearsOfWarStyleCoverSystem__FP6PLAYER -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the byte at offset 0xAEF.
 */

typedef struct State {
    char pad[0xAEF];
    unsigned char field;
} State;

void GCP_DisableGearsOfWarStyleCoverSystem__FP6PLAYER(State *self)
{
    self->field = 0;
}
