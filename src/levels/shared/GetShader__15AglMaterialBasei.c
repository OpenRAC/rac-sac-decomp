/* GetShader__15AglMaterialBasei -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at the scaled index.
 */

typedef struct Inner {
    char pad[8];
    char *rows;
} Inner;

typedef struct State {
    char pad[16];
    Inner *inner;
} State;

int GetShader__15AglMaterialBasei(State *self, int index)
{
    char *rows;

    rows = self->inner->rows;
    return *(int *)(rows + (index << 2));
}
