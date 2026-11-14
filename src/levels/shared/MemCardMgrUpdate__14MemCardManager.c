/* MemCardMgrUpdate__14MemCardManager -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Updates the memory card manager: the logical state first, then the
 * synchronisation, both on the same object. The copy of the object pointer in
 * a callee-saved register survives the first call.
 */

typedef struct MemCardManager MemCardManager;

extern void UpdateLogicsState__14MemCardManager(MemCardManager *self);
extern void UpdateSync__14MemCardManager(MemCardManager *self);

void MemCardMgrUpdate__14MemCardManager(MemCardManager *self)
{
    UpdateLogicsState__14MemCardManager(self);
    UpdateSync__14MemCardManager(self);
}
