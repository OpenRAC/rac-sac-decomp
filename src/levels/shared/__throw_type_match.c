/* __throw_type_match -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the third argument when the two strings are equal, else zero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/__throw_type_match.c.
 */

extern int strcmp(const char *a, const char *b);

int __throw_type_match(const char *a, const char *b, int value)
{
    if (strcmp(a, b) != 0) {
        return 0;
    }
    return value;
}
