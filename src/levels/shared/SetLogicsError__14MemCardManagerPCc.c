/* SetLogicsError__14MemCardManagerPCc -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MemCardManager {
    char pad[0xE0];
    unsigned char f;
} MemCardManager;

void SetLogicsError__14MemCardManagerPCc(MemCardManager *self, const char *msg)
{
    (void)msg;
    /* void so the store reuses $v0; leftover 1 is the observed return. */
    self->f = 1;
}
