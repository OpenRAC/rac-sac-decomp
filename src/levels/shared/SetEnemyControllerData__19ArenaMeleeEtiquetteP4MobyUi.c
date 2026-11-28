/* SetEnemyControllerData__19ArenaMeleeEtiquetteP4MobyUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the two arguments at offsets 0x50 and 0x54.
 */

typedef struct State {
    char pad[0x50];
    int first;
    int second;
} State;

void SetEnemyControllerData__19ArenaMeleeEtiquetteP4MobyUi(State *self, int first, int second)
{
    self->first = first;
    self->second = second;
}
