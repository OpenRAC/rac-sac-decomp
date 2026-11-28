/* MEMCARDCLIENT_WasSwapped__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern struct {
    char pad[0xC0];
    int flags;
} *g_memcardClient;

int MEMCARDCLIENT_WasSwapped__Fv(void)
{
    return (g_memcardClient->flags >> 3) & 1;
}
