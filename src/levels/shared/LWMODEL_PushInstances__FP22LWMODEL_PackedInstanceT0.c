/* LWMODEL_PushInstances__FP22LWMODEL_PackedInstanceT0 -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct LWMODEL_PackedInstance LWMODEL_PackedInstance;

typedef struct LWModelPush {
    char pad[0x10];
    LWMODEL_PackedInstance *from;
    LWMODEL_PackedInstance *to;
} LWModelPush;

extern LWModelPush g_lwModelPush;

void LWMODEL_PushInstances__FP22LWMODEL_PackedInstanceT0(
    LWMODEL_PackedInstance *from,
    LWMODEL_PackedInstance *to)
{
    g_lwModelPush.from = from;
    g_lwModelPush.to = to;
}
