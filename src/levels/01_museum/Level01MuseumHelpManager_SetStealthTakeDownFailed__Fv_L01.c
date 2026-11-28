/* Level01MuseumHelpManager_SetStealthTakeDownFailed__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MuseumHelp {
    char pad[0x58];
    int *flag;
} MuseumHelp;

extern MuseumHelp *D_L01_0026C184;

void Level01MuseumHelpManager_SetStealthTakeDownFailed__Fv(void)
{
    *D_L01_0026C184->flag = 1;
}
