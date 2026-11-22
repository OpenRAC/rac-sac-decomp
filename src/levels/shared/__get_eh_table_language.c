/* __get_eh_table_language -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the signed 16-bit field at offset 4 of an object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1EB920.c.
 */

typedef struct {
    char pad_00[4];
    short s04;
} Obj;

short __get_eh_table_language(Obj *o)
{
    return o->s04;
}
