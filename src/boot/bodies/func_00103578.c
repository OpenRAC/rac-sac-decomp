/* func_00103578 -- SCUS_976.23 0x00103578, 32 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   SCUS_976.23 : func_00103578 (32 octets)
 *   Stores 0 dans 0x54/0x4C/0x48, adresse 0x001FB570 dans 0x64 ; rend self.
 *   L'adresse passe par un int local, sinon elle prend $v0 (retour).
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

extern int g_boot_001FB570;

typedef struct {
    char pad00[0x48];
    int f48;
    int f4C;
    int f50;
    int f54;
    char pad58[12];
    int f64;
} BootState_00103578;

BootState_00103578 *func_00103578(BootState_00103578 *self)
{
    int address = (int)(long)&g_boot_001FB570;

    self->f54 = 0;
    self->f4C = 0;
    self->f48 = 0;
    self->f64 = address;
    return self;
}
