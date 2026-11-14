/* GADGET_FillAmmo__FUi -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GADGETDATA_s GADGETDATA_s;
typedef struct GADGETDEF_s GADGETDEF_s;

struct GADGETDATA_s {
    unsigned char pad[0x60];
    unsigned int m_ammo;
};

struct GADGETDEF_s {
    unsigned char pad[0x40];
    unsigned int m_ammo;
};

extern GADGETDATA_s *GADGET_GetData__FUi(unsigned int index);
extern GADGETDEF_s *GADGET_GetDataDef__FUi(unsigned int index);

void GADGET_FillAmmo__FUi(unsigned int index)
{
    GADGETDATA_s *data = GADGET_GetData__FUi(index);
    unsigned int ammo = GADGET_GetDataDef__FUi(index)->m_ammo;
    data->m_ammo = ammo;
}
