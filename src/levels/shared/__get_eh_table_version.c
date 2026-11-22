/* __get_eh_table_version -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the signed 16-bit field at offset 6 of an object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1EB918.c.
 */

typedef struct {
    char pad0[6];
    short h06;
} Obj;

int __get_eh_table_version(Obj *o)
{
    return o->h06;
}
