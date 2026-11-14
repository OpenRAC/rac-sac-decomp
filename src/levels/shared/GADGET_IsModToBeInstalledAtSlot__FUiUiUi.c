/* GADGET_IsModToBeInstalledAtSlot__FUiUiUi -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * A gadget (gadgetId) carries a table of 16 module identifiers at offset 0x30.
 * The function returns true if the entry slot of that table holds the module
 * identifier modId, and false for an empty table. It makes two distinct calls
 * to GADGET_GetData__FUi, the second inside the branch.
 */

typedef struct GADGET_DATA {
    unsigned char unknown_000[0x30];
    unsigned int mods[16];
} GADGET_DATA;

extern GADGET_DATA *GADGET_GetData__FUi(unsigned int gadgetId);
extern unsigned int GADGET_GetModDef__FUi(unsigned int modId);

unsigned long long GADGET_IsModToBeInstalledAtSlot__FUiUiUi(unsigned int gadgetId,
                                                             unsigned int modId,
                                                             unsigned int slot)
{
    unsigned long long result = 0;

    if (GADGET_GetData__FUi(gadgetId)->mods[slot]) {
        unsigned int *p2 = GADGET_GetData__FUi(gadgetId)->mods;
        unsigned int *m2 = &p2[slot];
        int t = (*m2 == GADGET_GetModDef__FUi(modId));

        result = t;
    }

    return result;
}
