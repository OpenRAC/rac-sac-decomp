/* MU_OscillatorResetRandom__FP19MU_OscillatorVectorif -- 296 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MU_OscillatorVector {
    float c;
    float s;
} MU_OscillatorVector;

extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

void MU_OscillatorResetRandom__FP19MU_OscillatorVectorif(
    MU_OscillatorVector *v, int n, float scale)
{
    MU_OscillatorVector *p = v;
    float r = (float)rand();

    if (n <= 0)
        return;
    {
        float k = 2.92583624e-09f;
        float npi = -3.14159274f;
        float one = 1.0f;
        float z = 0.0f;

    more:
        {
            float angle = r * k + npi;
            float c;
            float s;

            r = (float)rand();
            c = cosf(angle);
            s = sqrtf(one - c * c);
            if (angle < z)
                s = -s;
            p->c = c * scale;
            p->s = s * scale;
            p++;
            if (--n)
                goto more;
        }
    }
}
