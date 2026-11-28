/* GetGlobalInfo__19ApeZipDirectoryNodeR16ApeZipGlobalInfo -- 24 bytes. */

typedef struct ApeZipDirectoryNode {
    char pad[0x10];
    int a;
    int b;
} ApeZipDirectoryNode;

typedef struct ApeZipGlobalInfo {
    int a;
    int b;
} ApeZipGlobalInfo;

int GetGlobalInfo__19ApeZipDirectoryNodeR16ApeZipGlobalInfo(ApeZipDirectoryNode *self, ApeZipGlobalInfo *out)
{
    out->a = self->a;
    out->b = self->b;
    return 1;
}
