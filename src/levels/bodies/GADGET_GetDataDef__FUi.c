/* GADGET_GetDataDef__FUi -- FE.REL 0x00B978, 64 bytes.
 *
 * Returns the data definition a gadget points at, or 0 when the index is out of range.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
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
