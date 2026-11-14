/* CreateFileNameWithCurrentPath__14MemCardManagerPCcT1Pci -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MemCardManager MemCardManager;

extern void Snprintf__9ApeStringPciPCce(char *dest, int size, const char *format, ...);
extern const char D_FE_0011B310[];

char *CreateFileNameWithCurrentPath__14MemCardManagerPCcT1Pci(MemCardManager *self, const char *path,
                                    char *dest, int size)
{
    Snprintf__9ApeStringPciPCce(dest, size, D_FE_0011B310, self, path);
    return dest;
}
