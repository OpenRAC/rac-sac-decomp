/* GADGET_IsModToBeInstalledAtSlot__FUiUiUi -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
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
