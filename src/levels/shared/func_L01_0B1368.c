/* func_L01_0B1368 -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Computes wrapped start and end positions of a centered span inside a ring.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0D8348.c.
 */

void func_L01_0B1368(unsigned int first_size, unsigned int second_size,
                 int center, int *first, int *last)
{
    unsigned int half;
    unsigned int other;
    int left;
    int right;
    int end;

    *first = center;
    *last = center;
    half = (int)first_size / 2;
    other = second_size >> 1;
    half = other < half ? other : half;
    left = *first - half;
    second_size = second_size < first_size ? second_size : first_size;
    *first = left > -1 ? left : left + first_size;
    right = second_size - 1;
    right -= half;
    if (right != 0) {
        end = *last + right;
        *last = end < (int)first_size ? end : end - first_size;
    } else {
        *last = center;
    }
}