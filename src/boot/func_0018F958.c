/* _multadd -- 264 bytes.
 *
 * A function of the boot executable at 0x0018F958; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_multadd.c.
 */

/* _multadd -- RAC5 boot body, w11/s1.
 *
 * Provenance: the old BSD/newlib dtoa.c "multiply by m and add a" routine
 * (David M. Gay; the revision whose Bigint is _next/_k/_maxwds/_sign/_wds/_x
 * and whose internals keep the leading underscore). No copy of that revision
 * exists in the RAC1/RAC2 corpora, so the body is reconstructed from the retail
 * disassembly of ..: 16-bit half-word multiply, carry in
 * the 4th argument, func_0018F878(_k+1)+func_00184704(wds+2 words from _sign)+func_0018F920 on
 * growth. Retail calls the plain func_00184704 at , not memcpyalpha.
 * Retail: , interval 264 bytes. Toolchain: SN ProDG 3.01 ee-gcc2953
 * (GCC 2.95.3) -O2 -G0, Ps2EeAs.exe, SN ld.exe.
 */
struct _reent;

typedef struct _Bigint {
  struct _Bigint *_next;
  int _k;
  int _maxwds;
  int _sign;
  int _wds;
  unsigned int _x[1];
} Bigint;

extern Bigint *func_0018F878 (struct _reent *, int);
extern void func_0018F920 (struct _reent *, Bigint *);
extern void *func_00184704 (void *, const void *, unsigned int);

#define __ULong unsigned int

Bigint *
_multadd (struct _reent *ptr, Bigint *b, int m, int a)
{
  int i, wds, c;
  __ULong *x, y;
  __ULong xi, z;
  Bigint *b1;

  wds = b->_wds;
  x = b->_x;
  i = 0;
  do
    {
      xi = *x;
      y = (xi & 0xffff) * m + a;
      xi >>= 16;
      c = (int) (y >> 16);
      z = (xi * m) + c;
      *x++ = (z << 16) + (y & 0xffff);
      c = (int) (z >> 16);
      a = c;
    }
  while (++i < wds);
  if (a)
    {
      if (wds >= b->_maxwds)
	{
	  b1 = func_0018F878 (ptr, b->_k + 1);
	  func_00184704 (&b1->_sign, &b->_sign, b->_wds * sizeof (__ULong) + 2 * sizeof (__ULong));
	  func_0018F920 (ptr, b);
	  b = b1;
	}
      b->_x[wds++] = a;
      b->_wds = wds;
    }
  return b;
}
