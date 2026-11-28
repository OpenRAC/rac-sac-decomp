/* GetShadowExtrusionLength__11AglTopology -- 24 bytes. */

float GetShadowExtrusionLength__11AglTopology(char *self)
{
    float *p;
    float length;

    p = *(float **)(self + 0x138);
    length = 0.0f;
    if (p) {
        length = p[3];
    }
    return length;
}
