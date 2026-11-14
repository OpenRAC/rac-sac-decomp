/* func_0013B240 -- 72 bytes.
 *
 * A function of the boot executable at 0x0013B240; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Caller of func_143A10 (a bit table): the caller's first argument is passed
 * through unchanged and the second receives the address of a local integer. If
 * the call returns non-zero, the function stores zero in *a1 (when a1 is
 * non-null) and returns; otherwise it calls func_143FF8 with the value
 * returned in the local and a1. The write is carried in the delay slot of a
 * branch-likely: on the R5900 the slot of an untaken likely branch is
 * annulled, which gives "if (a1) *a1 = 0;".
 */

extern int func_143A10(unsigned int packed, int *out);
extern int func_143FF8(int value, int *out);

void func_0013B240(unsigned int packed, int *a1)
{
    int local;

    if (func_143A10(packed, &local)) {
        if (a1) {
            *a1 = 0;
            return;
        }
        return;
    }
    func_143FF8(local, a1);
}
