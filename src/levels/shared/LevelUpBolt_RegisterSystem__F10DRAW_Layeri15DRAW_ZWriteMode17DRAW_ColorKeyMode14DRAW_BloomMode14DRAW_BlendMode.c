/* LevelUpBolt_RegisterSystem__F10DRAW_Layeri15DRAW_ZWriteMode17DRAW_ColorKeyMode14DRAW_BloomMode14DRAW_BlendMode -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards its six arguments to Line_RegisterSystem and passes as a seventh
 * argument the address of a static PAR_Group object local to the module.
 */

typedef struct DRAW_Layer DRAW_Layer;
typedef int DRAW_ZWriteMode;
typedef int DRAW_ColorKeyMode;
typedef int DRAW_BloomMode;
typedef int DRAW_BlendMode;

extern void func_L13_166BF0(void *a, int b, int c, int d, int e, int f, void *g);
extern unsigned int LevelUpBolt_data;

void LevelUpBolt_RegisterSystem__F10DRAW_Layeri15DRAW_ZWriteMode17DRAW_ColorKeyMode14DRAW_BloomMode14DRAW_BlendMode(
    DRAW_Layer *layer,
    int param1,
    DRAW_ZWriteMode z_write_mode,
    DRAW_ColorKeyMode color_key_mode,
    DRAW_BloomMode bloom_mode,
    DRAW_BlendMode blend_mode)
{
    func_L13_166BF0(layer, param1, z_write_mode, color_key_mode,
                bloom_mode, blend_mode, &LevelUpBolt_data);
}
