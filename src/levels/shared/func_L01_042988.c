/* func_L01_042988 -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The index is computed in a local variable, which keeps the -1 in the
 * arithmetic instead of folding it into the load offset; the order of the
 * stores fixes the register assignment. The module's symbol table has no entry
 * for this function, so its name is descriptive only.
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
