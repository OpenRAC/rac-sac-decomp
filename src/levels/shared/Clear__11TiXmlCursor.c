/* Clear__11TiXmlCursor -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct TiXmlCursor {
    int row;
    int column;
} TiXmlCursor;

void Clear__11TiXmlCursor(TiXmlCursor *this)
{
    this->row = this->column = -1;
}
