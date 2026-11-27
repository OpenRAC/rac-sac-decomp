/* SetShadowExtrusionLength__11AglTopologyf -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

void SetShadowExtrusionLength__11AglTopologyf(char *self, float length)
{
    float *p;

    p = *(float **)(self + 0x138);
    if (p) {
        p[3] = length;
    }
}
