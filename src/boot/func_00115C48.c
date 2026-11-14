/* func_00115C48 -- 32 bytes.
 *
 * A function of the boot executable at 0x00115C48; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Fills a four-word object (id, default, value, extra).
 */

extern int g_boot_001FB9A0;

int *func_00115C48(int *self, int a1, int a2, int a3)
{
    self[0] = a1;
    self[1] = (int)&g_boot_001FB9A0;
    self[2] = a2;
    self[3] = a3;
    return self;
}
