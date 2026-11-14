/* func_00115F20 -- 32 bytes.
 *
 * A function of the boot executable at 0x00115F20; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Returns the complement of the sub-result.
 */

extern int func_00115900(void);

int func_00115F20(void)
{
    int result = func_00115900();
    return result ^ 1;
}
