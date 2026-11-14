/* func_00118C48 -- 32 bytes.
 *
 * A function of the boot executable at 0x00118C48; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int g_boot_001FBCB8;

void func_00118C48(void *self, int a1, int a2)
{
    if (self != 0) {
        *(int *)((char *)self + 8) = a2;
        *(int *)((char *)self + 0) = a1;
        *(int *)((char *)self + 4) = (int)&g_boot_001FBCB8;
    }
}
