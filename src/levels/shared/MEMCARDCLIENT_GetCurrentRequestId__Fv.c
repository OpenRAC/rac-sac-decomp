/* MEMCARDCLIENT_GetCurrentRequestId__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern struct {
    char pad[0xE0];
    int field;
} *g_memcardClient;

int MEMCARDCLIENT_GetCurrentRequestId__Fv(void)
{
    return g_memcardClient->field;
}
