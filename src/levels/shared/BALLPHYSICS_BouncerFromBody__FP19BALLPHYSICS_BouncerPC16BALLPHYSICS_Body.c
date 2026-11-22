/* BALLPHYSICS_BouncerFromBody__FP19BALLPHYSICS_BouncerPC16BALLPHYSICS_Body -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies a seven-float record, zeroing the last field when the flag bit is
 * set.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_02F348.c.
 */

struct Src {
    unsigned char flags;
    unsigned char pad01[7];
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    float f1C;
    float f20;
    unsigned char pad24[16];
    float f34;
};

struct Dst {
    float a00;
    float a04;
    float a08;
    float a0C;
    float a10;
    float a14;
    float a18;
};

void BALLPHYSICS_BouncerFromBody__FP19BALLPHYSICS_BouncerPC16BALLPHYSICS_Body(struct Dst *d, struct Src *s)
{
    float *p;
    float a;
    float b;
    float c;
    float e;
    float f;
    float g;
    float z;

    a = s->f08;
    b = s->f10;
    c = s->f14;
    e = s->f18;
    f = s->f1C;
    g = s->f20;
    z = 0.0f;
    if (!(s->flags & 4)) {
        z = s->f34;
    }
    d->a00 = a;
    p = &d->a04;
    d->a04 = b;
    p[1] = c;
    p[2] = e;
    d->a10 = f;
    d->a14 = g;
    d->a18 = z;
}
