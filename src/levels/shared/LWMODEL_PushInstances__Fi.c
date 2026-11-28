/* LWMODEL_PushInstances__Fi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct LWMODEL_InstanceRange {
    char pad[0x10];
    int head;
    int tail;
} LWMODEL_InstanceRange;

extern LWMODEL_InstanceRange D_L01_003AA888;

void LWMODEL_PushInstances__Fi(int count)
{
    LWMODEL_InstanceRange *p = &D_L01_003AA888;

    p->head += count;
}
