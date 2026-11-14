/* func_00117008 -- 32 bytes.
 *
 * A function of the boot executable at 0x00117008; its placement is
 * listed in config/boot/bodies.tsv.
 */

int *func_1160A0(void);

int func_00117008(void)
{
    int *slot;

    slot = func_1160A0();

    return *slot;
}
