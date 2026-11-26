/* GetMover__13ArenaBehavior -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the pointer loaded from offset 0x4, advanced by 40 bytes.
 */

typedef struct State {
    char pad[0x4];
    char *field;
} State;

char *GetMover__13ArenaBehavior(State *self)
{
    return self->field + 40;
}
