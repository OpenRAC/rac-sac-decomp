/* func_001012B0 -- 48 bytes.
 *
 * A function of the boot executable at 0x001012B0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body Reset__t5Queue2Z14tHUDPROMQ_NODEUi8.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/Reset__t5Queue2Z14tHUDPROMQ_NODEUi8.c.
 */

typedef struct {
    unsigned char base[0x60];
    int field60;
    int field64;
    int field68;
} tQueue2Z14tHUDPROMQ_NODEUi8;

extern void *func_001848AC(void *dst, int value, unsigned int size);

void func_001012B0(tQueue2Z14tHUDPROMQ_NODEUi8 *self) {
    self->field60 = 0;
    self->field64 = 0;
    self->field68 = 0;
    func_001848AC(self, 0, 0x60);
}
