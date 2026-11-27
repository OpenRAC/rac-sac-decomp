/* EofCurFile__19ApeZipDirectoryNode -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ZipCurFile {
    char pad[0x74];
    unsigned int flag;
} ZipCurFile;

typedef struct ApeZipDirectoryNode {
    char pad[0x78];
    ZipCurFile *cur;
} ApeZipDirectoryNode;

int EofCurFile__19ApeZipDirectoryNode(ApeZipDirectoryNode *this)
{
    return this->cur->flag == 0;
}
