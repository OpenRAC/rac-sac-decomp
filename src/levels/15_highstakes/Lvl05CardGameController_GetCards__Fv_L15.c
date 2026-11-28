/* Lvl05CardGameController_GetCards__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct CardGameVars {
    char pad[0x10];
    unsigned char cards;
} CardGameVars;

typedef struct Moby {
    char pad[0x58];
    CardGameVars *vars;
} Moby;

extern Moby *g_cardGameController;

void *Lvl05CardGameController_GetCards__Fv(void)
{
    return &g_cardGameController->vars->cards;
}
