/* DRAW_AddStageRenderCallback__F10DRAW_LayerPF10DRAW_LayerPv_vPv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DRAW_Layer DRAW_Layer;
typedef void (*tDRAW_LayerCallback)(DRAW_Layer *layer, void *user_data);

void DRAW_AddStageRenderCallback__F10DRAW_LayerPF10DRAW_LayerPv_vPv(
    DRAW_Layer *layer, tDRAW_LayerCallback callback, void *user_data)
{
    callback(layer, user_data);
}
