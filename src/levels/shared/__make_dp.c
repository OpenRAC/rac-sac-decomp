/* __make_dp -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/__make_dp_LEVEL_01.c.
 */

struct FourValues
{
    int first;
    int second;
    int third;
    long long fourth;
};
extern void __pack_d(struct FourValues *);

void __make_dp(int first, int second, int third, long long fourth)
{
    struct FourValues values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    __pack_d(&values);
}
