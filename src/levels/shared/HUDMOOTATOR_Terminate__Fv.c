/* HUDMOOTATOR_Terminate__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct HUDMootator {
    int a;
    int b;
} HUDMootator;

extern HUDMootator g_hudMootator;

void HUDMOOTATOR_Terminate__Fv(void)
{
    g_hudMootator.a = 0;
    g_hudMootator.b = 0;
}
