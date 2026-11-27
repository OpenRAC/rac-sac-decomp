/* TellCurFile__19ApeZipDirectoryNode -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ZipCurFile {
    char pad[0x20];
    long long pos;
} ZipCurFile;

typedef struct ApeZipDirectoryNode {
    char pad[0x78];
    ZipCurFile *cur;
} ApeZipDirectoryNode;

long long TellCurFile__19ApeZipDirectoryNode(ApeZipDirectoryNode *this)
{
    return this->cur->pos;
}
