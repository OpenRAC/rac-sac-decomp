/* _multiply -- 520 bytes.
 *
 * A function of the boot executable at 0x0018FD18; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_multiply.c.
 */

/* _multiply -- David M. Gay's dtoa/mprec multiply, SDK form (sdk/library),
 * adapted to bare types. Provenance: newlib libc/stdlib/mprec.c `mult`
 * (same body, ULong = 32-bit); measured compiler SN ProDG 3.01 ee-gcc2953
 * (GCC 2.95.3) + span5 assembler (-G0), -O2 -G0. */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

typedef struct _Bigint {
    struct _Bigint *_next;
    s32 _k, _maxwds, _sign, _wds;
    u32 _x[1];
} _Bigint;

struct _reent;
typedef u32 __ULong;
#define Storeinc(a, b, c) (((u16 *)a)[1] = (u16)b, ((u16 *)a)[0] = (u16)c, a++)

extern _Bigint *func_0018F878(struct _reent *, s32);

_Bigint *_multiply(struct _reent *ptr, _Bigint *a, _Bigint *b)
{
    _Bigint *c;
    s32 k, wa, wb, wc;
    __ULong carry, y, z;
    __ULong *x, *xa, *xae, *xb, *xbe, *xc, *xc0;
    __ULong z2;

    if (a->_wds < b->_wds) {
        c = a;
        a = b;
        b = c;
    }
    k = a->_k;
    wa = a->_wds;
    wb = b->_wds;
    wc = wa + wb;
    if (wc > a->_maxwds)
        k++;
    c = func_0018F878(ptr, k);
    for (x = c->_x, xa = x + wc; x < xa; x++)
        *x = 0;
    xa = a->_x;
    xae = xa + wa;
    xb = b->_x;
    xbe = xb + wb;
    xc0 = c->_x;
    for (; xb < xbe; xb++, xc0++) {
        if ((y = *xb & 0xffff) != 0) {
            x = xa;
            xc = xc0;
            carry = 0;
            do {
                z = (*x & 0xffff) * y + (*xc & 0xffff) + carry;
                carry = z >> 16;
                z2 = (*x++ >> 16) * y + (*xc >> 16) + carry;
                carry = z2 >> 16;
                Storeinc(xc, z2, z);
            } while (x < xae);
            *xc = carry;
        }
        if ((y = *xb >> 16) != 0) {
            x = xa;
            xc = xc0;
            carry = 0;
            z2 = *xc;
            do {
                z = (*x & 0xffff) * y + (*xc >> 16) + carry;
                carry = z >> 16;
                Storeinc(xc, z, z2);
                z2 = (*x++ >> 16) * y + (*xc & 0xffff) + carry;
                carry = z2 >> 16;
            } while (x < xae);
            *xc = z2;
        }
    }
    for (xc0 = c->_x, xc = xc0 + wc; wc > 0 && !*--xc; --wc)
        ;
    c->_wds = wc;
    return c;
}
