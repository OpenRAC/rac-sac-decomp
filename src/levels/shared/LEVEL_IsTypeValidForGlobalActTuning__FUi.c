/* LEVEL_IsTypeValidForGlobalActTuning__FUi -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_12B1C8.c.
 */

extern void *LEVEL_GetGameType__FUi(unsigned int kind, int count);
extern int LEVEL_IsTypeValidForGlobalActTuning__F13LevelGameType(void *value);

int LEVEL_IsTypeValidForGlobalActTuning__FUi(unsigned int kind, int count)
{
    void *value = LEVEL_GetGameType__FUi(kind, count);
    return LEVEL_IsTypeValidForGlobalActTuning__F13LevelGameType(value);
}
