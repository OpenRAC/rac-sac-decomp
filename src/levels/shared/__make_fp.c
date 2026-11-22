/* __make_fp -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/__make_fp_LEVEL_01.c.
 */

struct FourWords
{
    int first;
    int second;
    int third;
    int fourth;
};
extern void __pack_f(struct FourWords *);

void __make_fp(int first, int second, int third, int fourth)
{
    struct FourWords values;
    values.first = first;
    values.second = second;
    values.third = third;
    values.fourth = fourth;
    __pack_f(&values);
}
