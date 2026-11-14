/* func_0013A8E0 -- 64 bytes.
 *
 * A function of the boot executable at 0x0013A8E0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Queries func_15B460, then hands the result to func_15C610.
 */

extern int func_15B460(void *self, void *out);
extern int func_15C610(void *out, void *arg, int flag);

int func_0013A8E0(void *self, void *arg)
{
    void *out;
    void *saved = arg;
    int result = func_15B460(self, &out);

    if (result == 0) {
        result = func_15C610(out, saved, 0);
    }
    return result;
}
