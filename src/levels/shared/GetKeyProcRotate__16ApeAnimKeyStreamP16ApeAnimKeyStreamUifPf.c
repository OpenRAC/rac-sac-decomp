/* GetKeyProcRotate__16ApeAnimKeyStreamP16ApeAnimKeyStreamUifPf -- 132 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeAnimKeyStream ApeAnimKeyStream;

extern double fptodp(float);
extern double cos(double);
extern float  dptofp(double);

struct ApeAnimKeyStream {
    char   m_pad00[0x14];
    float *m_table;      /* 0x14 */
};

int GetKeyProcRotate__16ApeAnimKeyStreamP16ApeAnimKeyStreamUifPf(
    ApeAnimKeyStream *self, ApeAnimKeyStream *other, float *dest,
    int x, float angle, void *p, float y)
{
    float *t = self->m_table;
    int    i;

    for (i = 2; i >= 0; i--) {
        float c = (float)cos((double)angle);
        *dest = c * t[3] + t[0];
        t++;
        dest++;
    }
    return 0;
}
