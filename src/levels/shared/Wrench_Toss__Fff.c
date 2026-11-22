/* Wrench_Toss__Fff -- 96 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_12F218.c.
 */

float Wrench_Toss__Fff(float amplitude, float phase)
{
    float square;
    float double_phase;
    float cubic;
    float negative_square;
    if (phase < 0.5f)
        phase = phase + phase;
    else
        phase = 1.0f - ((phase - 0.5f) + (phase - 0.5f));
    square = phase * phase;
    double_phase = phase + phase;
    cubic = square * 0.0f * phase;
    negative_square = -square;
    return amplitude * (((cubic + negative_square) + double_phase) + 0.0f);
}
