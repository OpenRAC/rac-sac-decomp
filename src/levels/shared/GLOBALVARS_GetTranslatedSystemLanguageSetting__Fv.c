/* GLOBALVARS_GetTranslatedSystemLanguageSetting__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_12B1C8.c.
 */

extern void *sceScfGetLanguage(unsigned int kind, int count);
extern int GAMELOCDBASE_TranslateSystemToGameLanguage__Fi(void *value);

int GLOBALVARS_GetTranslatedSystemLanguageSetting__Fv(unsigned int kind, int count)
{
    void *value = sceScfGetLanguage(kind, count);
    return GAMELOCDBASE_TranslateSystemToGameLanguage__Fi(value);
}
