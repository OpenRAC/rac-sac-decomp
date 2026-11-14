/* func_001157E8 -- 44 bytes.
 *
 * A function of the boot executable at 0x001157E8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Stores four words (type, sign, exponent, mantissa) in a structure and passes
 * it to func_114C78.
 */

extern void func_114C78(void *parts);

struct Parts
{
    int type;
    int sign;
    int exponent;
    int mantissa;
};

void func_001157E8(int type, int sign, int exponent, int mantissa)
{
    struct Parts parts;

    parts.type = type;
    parts.sign = sign;
    parts.exponent = exponent;
    parts.mantissa = mantissa;
    func_114C78(&parts);
}
