/* func_0013B468 -- 176 bytes.
 *
 * A function of the boot executable at 0x0013B468; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Calls func_143A10; if it returns non-zero the function returns, otherwise it
 * calls func_1414B0 with the local value, the constant 1 and the eight float
 * parameters, which must survive the call and are therefore copied into
 * callee-saved float registers.
 */

extern int func_143A10(unsigned int packed, int *out);
extern int func_1414B0(int value, int flag, float f1, float f2, float f3,
                       float f4, float f5, float f6, float f7, float f8);

void func_0013B468(unsigned int packed, float f1, float f2, float f3, float f4,
                   float f5, float f6, float f7, float f8)
{
    int local;

    if (func_143A10(packed, &local))
        return;
    func_1414B0(local, 1, f1, f2, f3, f4, f5, f6, f7, f8);
}
