/* func_00169698 -- 20 bytes.
 *
 * if (out) *out = self + 0x28; return 0.
 * beqz out, delay addiu, then sw.
 */

int func_00169698(char *self, char **out)
{
    if (out) {
        *out = self + 0x28;
    }
    return 0;
}
