/* GetSize__10ApeZipFile -- 24 bytes. */

typedef struct ApeZipInfo {
    char pad50[0x50];
    int field50;
    char pad78[0x24];
    int field78;
} ApeZipInfo;

typedef struct ApeZipFile {
    char pad[0x118];
    ApeZipInfo *info;
    int size;
} ApeZipFile;

int GetSize__10ApeZipFile(ApeZipFile *self)
{
    self->info->field78 = self->size;
    return self->info->field50;
}
