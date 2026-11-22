/* fptoui -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Parses a float into kind, sign, shift and value and returns a shifted or
 * all-ones word.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/fptoui_LEVEL_01.c.
 */

struct ParsedValue { unsigned int kind; int sign; int shift; unsigned int value; };
extern void __unpack_f(float *, struct ParsedValue *);
unsigned int fptoui(float input)
{
    struct ParsedValue parsed;
    float work[4];
    work[0] = input;
    __unpack_f(work, &parsed);
    if ((parsed.kind ^ 2) == 0) return 0;
    if (parsed.kind < 2) return 0;
    if (parsed.sign != 0) return 0;
    if ((parsed.kind ^ 4) == 0) return 0xffffffffu;
    if (parsed.shift < 0) return 0;
    if (parsed.shift >= 32) return 0xffffffffu;
    if (parsed.shift < 31)
        return parsed.value >> (30 - parsed.shift);
    return parsed.value << (parsed.shift - 30);
}
