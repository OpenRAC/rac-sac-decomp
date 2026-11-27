/* Level05CasinoController_ClearCamFocusMoby__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct CasinoVars {
    char pad[0x14];
    void *camFocus;
} CasinoVars;

typedef struct Moby {
    char pad[0x58];
    CasinoVars *vars;
} Moby;

extern Moby *g_casinoController;

void Level05CasinoController_ClearCamFocusMoby__Fv(void)
{
    g_casinoController->vars->camFocus = 0;
}
