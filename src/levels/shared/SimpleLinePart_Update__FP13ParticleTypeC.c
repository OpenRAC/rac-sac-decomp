/* SimpleLinePart_Update__FP13ParticleTypeC -- 372 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ages the particle: moves both position vectors by the velocity, fades the
 * two colour values by their rates and repacks them into the colour words;
 * releases the particle when its life runs out.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0E3650.c.
 */

struct Motion {
    float v_00[3];
    unsigned short h_0C;
    char pad_0E[2];
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
    char pad_20[0x2C - 0x20];
    unsigned int w_2C;
    char pad_30[0x3C - 0x30];
    unsigned int w_3C;
};

struct Part {
    char pad_00[8];
    unsigned int w_08;
    float p_0C[3];
    char pad_18[4];
    unsigned int w_1C;
    float p_20[3];
    char pad_2C[4];
    struct Motion m_30;
};

extern struct Part *g_part_updatingPar;

extern void PAR_UnitDestroy__FPv(struct Part *p);
extern int fptoui(float f);

static __inline__ void AddVec(float *d, float *s)
{
    d[0] += s[0];
    d[1] += s[1];
    d[2] += s[2];
}

void SimpleLinePart_Update__FP13ParticleTypeC(struct Part *o)
{
    struct Motion *m;

    m = &o->m_30;
    if ((short) --m->h_0C <= 0) {
        if (o != 0) {
            if (o == g_part_updatingPar) {
                g_part_updatingPar = 0;
            } else {
                PAR_UnitDestroy__FPv(o);
            }
        }
        return;
    }
    AddVec(o->p_0C, m->v_00);
    AddVec(o->p_20, m->v_00);
    if (m->f_10 != 0.0f) {
        m->f_18 -= m->f_10;
        if (o->m_30.f_18 < 0.0f) {
            o->m_30.f_18 = 0.0f;
        }
        o->w_08 = (fptoui(m->f_18) << 24) | m->w_2C;
    }
    if (m->f_14 != 0.0f) {
        m->f_1C -= m->f_14;
        if (m->f_1C < 0.0f) {
            m->f_1C = 0.0f;
        }
        o->w_1C = (fptoui(m->f_1C) << 24) | m->w_3C;
    }
}
