/* func_FE_069340 -- 576 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Adds two unpacked soft-float numbers with a 64-bit fraction and returns the
 * result record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0235C8.c.
 */

typedef enum {
    CLASS_SNAN = 0,
    CLASS_QNAN = 1,
    CLASS_ZERO = 2,
    CLASS_NUMBER = 3,
    CLASS_INFINITY = 4
} Cls;

typedef struct {
    Cls cls;
    unsigned int sign;
    int exp;
    union {
        unsigned long long ll;
    } fraction;
} Fp;

extern Fp D_FE_002251A8;

static inline int isnan(Fp *x)
{
    return x->cls == CLASS_SNAN || x->cls == CLASS_QNAN;
}

static inline int isinf(Fp *x)
{
    return x->cls == CLASS_INFINITY;
}

static inline int iszero(Fp *x)
{
    return x->cls == CLASS_ZERO;
}

Fp *func_FE_069340(Fp *a, Fp *b, Fp *tmp)
{
    long long tfraction;
    int a_normal_exp;
    int b_normal_exp;
    unsigned long long a_fraction;
    unsigned long long b_fraction;

    if (isnan(a))
        return a;
    if (isnan(b))
        return b;
    if (isinf(a)) {
        if (isinf(b) && a->sign != b->sign)
            return &D_FE_002251A8;
        return a;
    }
    if (isinf(b))
        return b;
    if (iszero(b)) {
        if (iszero(a)) {
            *tmp = *a;
            tmp->sign = a->sign & b->sign;
            return tmp;
        }
        return a;
    }
    if (iszero(a))
        return b;

    {
        int diff;
        a_normal_exp = a->exp;
        b_normal_exp = b->exp;
        a_fraction = a->fraction.ll;
        b_fraction = b->fraction.ll;
        diff = a_normal_exp - b_normal_exp;
        if (diff < 0)
            diff = -diff;
        if (diff < 64) {
            while (a_normal_exp > b_normal_exp) {
                b_normal_exp++;
                b_fraction = (b_fraction & 1) | (b_fraction >> 1);
            }
            while (b_normal_exp > a_normal_exp) {
                a_normal_exp++;
                a_fraction = (a_fraction & 1) | (a_fraction >> 1);
            }
        } else {
            if (a_normal_exp > b_normal_exp) {
                b_normal_exp = a_normal_exp;
                b_fraction = 0;
            } else {
                a_normal_exp = b_normal_exp;
                a_fraction = 0;
            }
        }
    }
    if (a->sign != b->sign) {
        if (a->sign) {
            tfraction = -a_fraction + b_fraction;
        } else {
            tfraction = a_fraction - b_fraction;
        }
        if (tfraction >= 0) {
            tmp->sign = 0;
            tmp->exp = a_normal_exp;
            tmp->fraction.ll = tfraction;
        } else {
            tmp->sign = 1;
            tmp->exp = a_normal_exp;
            tmp->fraction.ll = -tfraction;
        }
        while (tmp->fraction.ll < 0x1000000000000000ULL && tmp->fraction.ll) {
            tmp->fraction.ll <<= 1;
            tmp->exp--;
        }
    } else {
        tmp->sign = a->sign;
        tmp->exp = a_normal_exp;
        tmp->fraction.ll = a_fraction + b_fraction;
    }
    tmp->cls = CLASS_NUMBER;
    if (tmp->fraction.ll >= 0x2000000000000000ULL) {
        tmp->fraction.ll = (tmp->fraction.ll & 1) | (tmp->fraction.ll >> 1);
        tmp->exp++;
    }
    return tmp;
}
