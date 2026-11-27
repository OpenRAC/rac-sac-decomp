/* Lvl05CardGameController_GetCenterCard__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct CardVars {
    char pad[0x60];
    int center;
} CardVars;

typedef struct CardCtrl {
    char pad[0x58];
    CardVars *vars;
} CardCtrl;

extern CardCtrl *g_cardCtrl;

int Lvl05CardGameController_GetCenterCard__Fv(void)
{
    return g_cardCtrl->vars->center;
}
