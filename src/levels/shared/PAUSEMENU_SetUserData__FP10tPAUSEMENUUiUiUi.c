/* PAUSEMENU_SetUserData__FP10tPAUSEMENUUiUiUi -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_0C0320.c.
 */

struct Table {
    char **entries;
    unsigned int count;
};

int PAUSEMENU_SetUserData__FP10tPAUSEMENUUiUiUi(struct Table *table, unsigned int index,
                int value, unsigned int field)
{
    if (index >= table->count)
        return 0;
    {
      unsigned int field_index = field - 1U;
      char *entry;
      int *fields;
      if (field_index >= 4)
          return 0;
      entry = table->entries[index];
      fields = (int *)(entry + 0xd0);
      fields[field_index] = value;
    }
    return 1;
}
