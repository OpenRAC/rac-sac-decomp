/* func_00103578 -- 32 bytes.
 *
 * A function of the boot executable at 0x00103578; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Stores 0 at offsets 0x54, 0x4C and 0x48 of the object, stores the address of
 * a global at offset 0x64, and returns the object. The address goes through a
 * local int, otherwise it would be allocated to the return register.
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
