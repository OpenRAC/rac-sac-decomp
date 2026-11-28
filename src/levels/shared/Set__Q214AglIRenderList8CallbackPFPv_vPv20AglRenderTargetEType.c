/* Set__Q214AglIRenderList8CallbackPFPv_vPv20AglRenderTargetEType -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores three integer arguments.
 */

typedef struct State {
    int at_0;
    int at_4;
    int at_8;
} State;

void Set__Q214AglIRenderList8CallbackPFPv_vPv20AglRenderTargetEType(State *self, int first, int second, int third)
{
    self->at_0 = first;
    self->at_4 = second;
    self->at_8 = third;
}
