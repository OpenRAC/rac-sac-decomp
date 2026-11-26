/* GetChannel__15ApeAnimTreeNodei -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at the scaled index.
 */

typedef struct Inner {
    char *rows;
} Inner;

typedef struct State {
    char pad[32];
    Inner *inner;
} State;

int GetChannel__15ApeAnimTreeNodei(State *self, int index)
{
    char *rows;

    rows = self->inner->rows;
    return *(int *)(rows + (index << 2));
}
