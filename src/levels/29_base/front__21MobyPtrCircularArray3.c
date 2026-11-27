/* front__21MobyPtrCircularArray3 -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MobyPtrCircularArray3 {
    void *slots[3];
    int head;
} MobyPtrCircularArray3;

void *front__21MobyPtrCircularArray3(MobyPtrCircularArray3 *self)
{
    void **slots;

    slots = (void **)self;
    slots += self->head;
    return *slots;
}
