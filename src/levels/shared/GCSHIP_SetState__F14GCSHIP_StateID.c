/* GCSHIP_SetState__F14GCSHIP_StateID -- 112 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_136478.c.
 */

/* Switch the selected controller, invoking its leave and enter virtual methods. */
typedef struct Method { short adjust; short pad; void (*call)(void *); } Method;
typedef struct Controller { Method *table; } Controller;
typedef struct Manager { unsigned char pad[0x64]; int selected; Controller *current; Controller *slots[0]; } Manager;
extern Manager g_gcship;
static inline void invoke(Controller *controller, int slot)
{
    Method *method=&controller->table[slot];
    method->call((unsigned char *)controller+method->adjust);
}
void GCSHIP_SetState__F14GCSHIP_StateID(int index)
{
    Manager *manager = &g_gcship;
    Controller *old = manager->current;
    invoke(old,4);
    manager->selected = index;
    manager->current = manager->slots[index];
    invoke(manager->current,3);
}
