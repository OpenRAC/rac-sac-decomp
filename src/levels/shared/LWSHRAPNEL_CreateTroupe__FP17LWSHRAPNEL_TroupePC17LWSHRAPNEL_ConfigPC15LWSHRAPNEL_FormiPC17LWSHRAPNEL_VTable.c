/* LWSHRAPNEL_CreateTroupe__FP17LWSHRAPNEL_TroupePC17LWSHRAPNEL_ConfigPC15LWSHRAPNEL_FormiPC17LWSHRAPNEL_VTable -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0365D0.c.
 */

extern char D_L01_002A2F70[];
struct Link;
extern void ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(struct Link *, int);
extern void LWSHRAPNEL_RefreshTroupe__FP17LWSHRAPNEL_TroupePC17LWSHRAPNEL_Config(void *, void *);

void LWSHRAPNEL_CreateTroupe__FP17LWSHRAPNEL_TroupePC17LWSHRAPNEL_ConfigPC15LWSHRAPNEL_FormiPC17LWSHRAPNEL_VTable(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type((struct Link *)record, (int)D_L01_002A2F70);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    LWSHRAPNEL_RefreshTroupe__FP17LWSHRAPNEL_TroupePC17LWSHRAPNEL_Config(record, context);
}
