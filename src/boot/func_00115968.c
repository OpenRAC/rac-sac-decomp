/* func_00115968 -- 32 bytes.
 *
 * A function of the boot executable at 0x00115968; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Fills a three-word object (id, default, value).
 */

extern int g_boot_001FB9B8;

void func_00115968(int *self, int a1, int a2)
{
    if (self) {
        self[2] = a2;
        self[0] = a1;
        self[1] = (int)&g_boot_001FB9B8;
    }
}
