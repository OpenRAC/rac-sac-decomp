/* GadgetBotController_GetNavAvoids__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GadgetBotCtrl {
    char pad[0x54];
    int *navAvoids;
} GadgetBotCtrl;

extern GadgetBotCtrl *g_gadgetBot;

int GadgetBotController_GetNavAvoids__Fv(void)
{
    return *g_gadgetBot->navAvoids;
}
