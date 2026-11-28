/* MEMCARDCLIENT_GetMutexId__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int *g_memcardClient;

int MEMCARDCLIENT_GetMutexId__Fv(void)
{
    return *g_memcardClient;
}
