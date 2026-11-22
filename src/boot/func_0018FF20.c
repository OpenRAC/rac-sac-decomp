/* _pow5mult -- 256 bytes.
 *
 * A function of the boot executable at 0x0018FF20; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_pow5mult.c.
 */

/* -- newlib mprec Bigint multiply by 5**k (_pow5mult). Ported from OpenRAC/rac4-decomp src/core/0011FA80.c (func_0011FA80). */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdlib/mprec.c
 * newlib 8a0efa53e44919bcf5ccb1d3353618a82afdf8bc.
 * Original notice retained below; this is not an unchanged vendor file. */
/****************************************************************
 *
 * The author of this software is David M. Gay.
 *
 * Copyright (c) 1991 by AT&T.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY. IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 ***************************************************************/
typedef signed int s32;
typedef unsigned int u32;
typedef unsigned char u8;


typedef struct Bigint {
    struct Bigint *next;
    s32 k;
    s32 maxwds;
    s32 sign;
    s32 wds;
    u32 x[1];
} Bigint;

typedef struct {
    u8 pad[0x48];
    Bigint *p5s;
} Reent;

extern void func_0018F920(Reent *, Bigint *);
extern Bigint *func_0018F958(Reent *, Bigint *, s32, s32);
extern Bigint *func_0018FCE0(Reent *, s32);
extern Bigint *func_0018FD18(Reent *, Bigint *, Bigint *);
extern s32 D_00205408[];

Bigint *_pow5mult(Reent *ptr, Bigint *b, s32 k) {
    Bigint *b1;
    Bigint *p5;
    Bigint *p51;
    s32 i;

    if ((i = k & 3) != 0) {
        b = func_0018F958(ptr, b, D_00205408[i - 1], 0);
    }
    if (!(k >>= 2)) {
        return b;
    }
    if (!(p5 = ptr->p5s)) {
        p5 = ptr->p5s = func_0018FCE0(ptr, 625);
        p5->next = 0;
    }
    for (;;) {
        if (k & 1) {
            b1 = func_0018FD18(ptr, b, p5);
            func_0018F920(ptr, b);
            b = b1;
        }
        if (!(k >>= 1)) {
            break;
        }
        if (!(p51 = p5->next)) {
            p51 = p5->next = func_0018FD18(ptr, p5, p5);
            p51->next = 0;
        }
        p5 = p51;
    }
    return b;
}
