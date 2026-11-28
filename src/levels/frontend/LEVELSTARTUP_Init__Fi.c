/* LEVELSTARTUP_Init__Fi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct {
    char pad[0xECC];
    int levelId;
} GlobalVars;

extern GlobalVars *pGV;
extern int g_startupLevel;

void LEVELSTARTUP_Init__Fi(int level)
{
    pGV->levelId = 0;
    g_startupLevel = level;
}
