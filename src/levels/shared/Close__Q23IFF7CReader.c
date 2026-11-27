/* Close__Q23IFF7CReader -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct CReader {
    char pad[4];
    int file;
} CReader;

int Close__Q23IFF7CReader(CReader *this)
{
    this->file = 0;
    return 1;
}
