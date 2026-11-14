/* func_L01_042988 -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ITEM_TABLE ITEM_TABLE;

struct ITEM_TABLE {
    unsigned int reserved_000[3];
    unsigned char *rows;
};

unsigned char func_L01_042988(ITEM_TABLE *self,
                                          unsigned int row,
                                          unsigned int column)
{
    unsigned int index;

    index = 3 * row - 1;
    index = index + column;
    return self->rows[index];
}
