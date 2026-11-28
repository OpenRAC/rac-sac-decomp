/* __as__5AVec3RC5AVec3 -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned int AVec3 __attribute__((mode(TI), aligned(16)));

AVec3 *__as__5AVec3RC5AVec3(AVec3 *dest, const AVec3 *src)
{
    *dest = *src;
    return dest;
}
