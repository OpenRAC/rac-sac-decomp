/* SetEnemyControllerData__17ArenaGBEnterTableP4MobyUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the two arguments at offsets 0x14 and 0x18.
 */

typedef struct State {
    char pad[0x14];
    int first;
    int second;
} State;

void SetEnemyControllerData__17ArenaGBEnterTableP4MobyUi(State *self, int first, int second)
{
    self->first = first;
    self->second = second;
}
