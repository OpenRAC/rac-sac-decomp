/* TieManipulator_Move__Ffff -- 136 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1B7EF8.c.
 */

float TieManipulator_Move__Ffff(float scale, float time, float value)
{
    float triangle;
    float square;
    float first;
    float second;
    if (time < 0.5f)
        triangle = time + time;
    else
        triangle = 1.0f - ((time - 0.5f) + (time - 0.5f));
    square = triangle * triangle;
    first = 1.0f - value;
    second = (((value + 0.0f) - 1.0f) - first) + 0.0f;
    return scale * (second * square * triangle +
                    ((first - 0.0f) - second) * square +
                    (1.0f - first) * triangle + 0.0f);
}
