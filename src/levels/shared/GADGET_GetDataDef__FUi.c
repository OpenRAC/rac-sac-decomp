/* GADGET_GetDataDef__FUi -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the data definition a gadget points at, or 0 when the index is out
 * of range. The table has 0x28 records of 0x74 bytes; each record holds an
 * array of 19 pointers at offset 0x10 and the index of the active entry at
 * offset 0x5C. The order of the additions matters: (offset + sub-index * 4) is
 * computed before the table is added, and the +0x10 stays in the load offset.
 */

typedef struct GADGETDEF_s GADGETDEF_s;

struct GADGETDEF_s {
    unsigned char pad0[0x10];
    GADGETDEF_s *entries[19];
    int which;
    unsigned char pad1[0x14];
};

extern GADGETDEF_s g_GadgetDefs[0x28];

GADGETDEF_s *GADGET_GetDataDef__FUi(unsigned int index)
{
    if (index < 0x28)
        return g_GadgetDefs[index].entries[g_GadgetDefs[index].which];
    return 0;
}
