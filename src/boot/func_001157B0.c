/* func_001157B0 -- 56 bytes.
 *
 * A function of the boot executable at 0x001157B0; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern void func_114D88(void *source, void *parts);
extern void func_114C78(void *parts);

struct Parts
{
    int type;
    int sign;
    int exponent;
    int mantissa;
};

void func_001157B0(float value)
{
    float bits = value;
    struct Parts parts;

    func_114D88(&bits, &parts);
    parts.sign = !parts.sign;
    func_114C78(&parts);
}
