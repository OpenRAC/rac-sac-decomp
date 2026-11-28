/* OperaController_AnyEnemiesAlive__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct OperaVars {
    char pad[0x14];
    int alive;
} OperaVars;

typedef struct Moby {
    char pad[0x58];
    OperaVars *vars;
} Moby;

typedef struct OperaCtrl {
    char pad[0xC];
    Moby *moby;
} OperaCtrl;

extern OperaCtrl *g_operaController;

int OperaController_AnyEnemiesAlive__Fv(void)
{
    return g_operaController->moby->vars->alive;
}
