/* CALLBACKQUEUE_Register__FP19tCALLBACKQUEUE_DATAPFPv_vPv -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Appends a key and value pair to the 32-entry table; returns 0 when it is
 * full.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_06_127FA0.c.
 */

typedef struct {
    unsigned int count;
    int keys[32];
    int values[32];
} Table;

int CALLBACKQUEUE_Register__FP19tCALLBACKQUEUE_DATAPFPv_vPv(Table *table, int key, int value)
{
    if (table->count < 32) {
        table->keys[table->count] = key;
        table->values[table->count] = value;
        table->count++;
        return 1;
    }
    return 0;
}
