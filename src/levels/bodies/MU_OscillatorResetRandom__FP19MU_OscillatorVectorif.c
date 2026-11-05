/* MU_OscillatorResetRandom__FP19MU_OscillatorVectorif -- LEVEL1.REL 0x001A5708, 296 bytes.
 *
 * Body translated from the retail module.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gprfirst-divctx-sqrt:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
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
