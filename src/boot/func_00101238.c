/* func_00101238 -- 40 bytes.
 *
 * A function of the boot executable at 0x00101238; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body Reset__t5Stack2Z19tMEMCARD_STATE_NODEUi8.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/Reset__t5Stack2Z19tMEMCARD_STATE_NODEUi8.c.
 */

typedef struct {
    unsigned char base[0x80];
    int field80;
} tStack2Z19tMEMCARD_STATE_NODEUi8;

extern void *func_001848AC(void *dst, int value, unsigned int size);

void func_00101238(tStack2Z19tMEMCARD_STATE_NODEUi8 *self) {
    self->field80 = 0;
    func_001848AC(self, 0, 0x80);
}
