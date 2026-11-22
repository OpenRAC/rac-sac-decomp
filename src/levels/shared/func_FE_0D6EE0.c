/* func_FE_0D6EE0 -- 612 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sorts all frame records by address and gives back the sorted list. Ported
 * from rac2-decomp src/core/001236C8.c (eh_sort_fde_vector).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_025A58.c.
 */

/* libgcc frame.o: end_fde_sort (with frame_heapsort inlined), from GCC's frame.c,
   carried from rac3-decomp's src/boot_elf/core/libgcc/frame.c (func_00129BF0), the
   same instructions there. abort and free are the named imports, fde_split is
   func_FE_0D7C00 and fde_merge is func_FE_0D6DE0 here; abort is noreturn, as
   frame.c's stdlib.h declares it. GPL-2.0-or-later with the libgcc linking
   exception below. No proprietary SDK source is used. */
/* More subroutines needed by GCC output code on some machines.  */
/* Compile this one with gcc.  */
/* Copyright (C) 1989, 92-98, 1999 free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* As a special exception, if you link this library with other files,
   some of which are compiled with GCC, to produce an executable,
   this library does not by itself cause the resulting executable
   to be covered by the GNU General Public License.
   This exception does not however invalidate any other reasons why
   the executable file might be covered by the GNU General Public License.  */

typedef unsigned int size_t;

typedef          int  sword __attribute__ ((mode (SI)));
typedef unsigned int  uword __attribute__ ((mode (SI)));
typedef unsigned int  uaddr __attribute__ ((mode (pointer)));
typedef          int  saddr __attribute__ ((mode (pointer)));


extern void abort (void) __attribute__ ((__noreturn__));
extern void free (void *);

/* The first few fields of an FDE.  */

struct dwarf_fde {
  uword length;
  sword CIE_delta;
  void* pc_begin;
  uaddr pc_range;
} __attribute__ ((packed, aligned (__alignof__ (void *))));

typedef struct dwarf_fde fde;

/* Ordering function for FDEs.  Functions can't overlap, so we just compare
   their starting addresses.  */

static inline saddr
fde_compare (fde *x, fde *y)
{
  return (saddr)x->pc_begin - (saddr)y->pc_begin;
}

typedef struct fde_vector
{
  fde **array;
  size_t count;
} fde_vector;

typedef struct fde_accumulator
{
  fde_vector linear;
  fde_vector erratic;
} fde_accumulator;

extern void func_FE_0D7C00 (fde_vector *linear, fde_vector *erratic);
extern void func_FE_0D6DE0 (fde_vector *v1, const fde_vector *v2);

/* This is O(n log(n)).  BSD/OS defines heapsort in stdlib.h, so we must
   use a name that does not conflict.  */
static inline void
frame_heapsort (fde_vector *erratic)
{
  /* For a description of this algorithm, see:
     Samuel P. Harbison, Guy L. Steele Jr.: C, a reference manual, 2nd ed.,
     p. 60-61. */
  fde ** a = erratic->array;
  /* A portion of the array is called a "heap" if for all i>=0:
     If i and 2i+1 are valid indices, then a[i] >= a[2i+1].
     If i and 2i+2 are valid indices, then a[i] >= a[2i+2]. */
#define SWAP(x,y) do { fde * tmp = x; x = y; y = tmp; } while (0)
  size_t n = erratic->count;
  size_t m = n;
  size_t i;

  while (m > 0)
    {
      /* Invariant: a[m..n-1] is a heap. */
      m--;
      for (i = m; 2*i+1 < n; )
        {
          if (2*i+2 < n
              && fde_compare (a[2*i+2], a[2*i+1]) > 0
              && fde_compare (a[2*i+2], a[i]) > 0)
            {
              SWAP (a[i], a[2*i+2]);
              i = 2*i+2;
            }
          else if (fde_compare (a[2*i+1], a[i]) > 0)
            {
              SWAP (a[i], a[2*i+1]);
              i = 2*i+1;
            }
          else
            break;
        }
    }
  while (n > 1)
    {
      /* Invariant: a[0..n-1] is a heap. */
      n--;
      SWAP (a[0], a[n]);
      for (i = 0; 2*i+1 < n; )
        {
          if (2*i+2 < n
              && fde_compare (a[2*i+2], a[2*i+1]) > 0
              && fde_compare (a[2*i+2], a[i]) > 0)
            {
              SWAP (a[i], a[2*i+2]);
              i = 2*i+2;
            }
          else if (fde_compare (a[2*i+1], a[i]) > 0)
            {
              SWAP (a[i], a[2*i+1]);
              i = 2*i+1;
            }
          else
            break;
        }
    }
#undef SWAP
}

/* end_fde_sort */
fde ** func_FE_0D6EE0 (fde_accumulator *accu, size_t count)
{
  if (accu->linear.count != count)
    abort ();
  func_FE_0D7C00 (&accu->linear, &accu->erratic);
  if (accu->linear.count + accu->erratic.count != count)
    abort ();
  frame_heapsort (&accu->erratic);
  func_FE_0D6DE0 (&accu->linear, &accu->erratic);
  free (accu->erratic.array);
  return accu->linear.array;
}
