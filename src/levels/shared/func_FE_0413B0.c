/* func_FE_0413B0 -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Reads an unsigned integer from a string and clamps the value between min and
 * max; the upper bound is ignored when max is 0.
 */

extern int sscanf(const char *str, const char *format, ...);
extern const char g_scan_format_u[];

unsigned long long func_FE_0413B0(const char *str,
                               unsigned int *out,
                               unsigned int min,
                               unsigned int max)
{
    if (sscanf(str, g_scan_format_u, out) != 1)
        return 0;

    if (*out < min)
        *out = min;

    if (max != 0) {
        if (max < *out)
            *out = max;
    }

    return 1;
}
