/* _ulp -- 200 bytes.
 *
 * A function of the boot executable at 0x00190370; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_ulp.c.
 */

/* _ulp -- David M. Gay's mprec ulp (newlib libc/stdlib/mprec.c), written with bare types; retail . */
typedef int s32;
typedef unsigned int u32;
typedef struct _Bigint {
    struct _Bigint *_next;
    s32 _k, _maxwds, _sign, _wds;
    u32 _x[1];
} _Bigint;
typedef union {
    double d;
    u32 i[2];
} double_union;
#define word0(x) (x.i[1])
#define word1(x) (x.i[0])
#define Exp_msk1 ((u32)0x100000L)
#define Exp_mask ((u32)0x7ff00000L)
#define Exp_shift 20
#define P 53

double _ulp(double _x)
{
    double_union x, a;
    s32 L;

    x.d = _x;
    L = (word0(x) & Exp_mask) - (P - 1) * Exp_msk1;
    if (L > 0) {
        word0(a) = L;
        word1(a) = 0;
    } else {
        L = -L >> Exp_shift;
        if (L < Exp_shift) {
            word0(a) = 0x80000 >> L;
            word1(a) = 0;
        } else {
            word0(a) = 0;
            L -= Exp_shift;
            word1(a) = L >= 31 ? 1 : 1 << (31 - L);
        }
    }
    return a.d;
}
