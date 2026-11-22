/* GCSCORVETTE_IdleStopBreather__FP17GCSCORVETTE_Actor -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets a height and clears a flag on a record, then calls a helper twice on
 * sub-objects.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_107BB8.c.
 */

struct Q107BB8 {
    char pad0[0x5C];
    float f5C;
};

struct P107BB8 {
    char pad0[0x0D];
    unsigned char b0D;
    char pad0E[0x0A];
    float f18;
    char pad1C[0x414];
    struct Q107BB8 *f430;
};

extern void GCSENEMY_TurretActivate__FP15GCSENEMY_TurretPC21GCSENEMY_TurretConfigff(char *a, char *b, float c, float d);

static __inline__ void Link(char *dst, char *src, float f)
{
    GCSENEMY_TurretActivate__FP15GCSENEMY_TurretPC21GCSENEMY_TurretConfigff(dst, src, 0.0f, f);
}

void GCSCORVETTE_IdleStopBreather__FP17GCSCORVETTE_Actor(struct P107BB8 *p)
{
    struct Q107BB8 *q;

    q = p->f430;
    p->f18 = 150.0f;
    p->b0D = 0;
    Link((char *)p + 0x398, (char *)q + 0xA8, q->f5C);
    Link((char *)p + 0x3C8, (char *)p->f430 + 0xB4, q->f5C);
}
