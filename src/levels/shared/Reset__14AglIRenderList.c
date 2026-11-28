/* Reset__14AglIRenderList -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglIRenderList {
    void *head;
    void *cur;
} AglIRenderList;

void Reset__14AglIRenderList(AglIRenderList *self)
{
    self->cur = self->head;
}
