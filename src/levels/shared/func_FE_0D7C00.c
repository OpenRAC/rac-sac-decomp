/* func_FE_0D7C00 -- 372 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Splits a list of frame records into an already-sorted part and an
 * out-of-order part. Ported from OpenRAC/rac2-decomp src/core/001242A0.c
 * (eh_split_fde_vector).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0266D0.c.
 */

/* libgcc frame.o: fde_split, transcribed from GCC's frame.c (GPL version
   2-or-later with the libgcc linking exception; the source is the public
   archive the qualified compiler is built from, gnu-ee-binutils-gcc-1.1,
   gcc/frame.c).

   fde_compare is the static inline of the same file, so the body inlines to
   the two pc_begin loads and the subu, and the whole function has no
   relocation at all. size_t previous_max[count] is the variable-length
   array the function allocates with a bare subu on the stack pointer. */

typedef unsigned int uword __attribute__ ((mode (SI)));
typedef int sword __attribute__ ((mode (SI)));
typedef unsigned int uaddr __attribute__ ((mode (pointer)));
typedef int saddr __attribute__ ((mode (pointer)));
typedef unsigned int u32;

struct dwarf_fde {
  uword length;
  sword CIE_delta;
  void *pc_begin;
  uaddr pc_range;
};

typedef struct dwarf_fde fde;

typedef struct fde_vector
{
  fde **array;
  u32 count;
} fde_vector;

static __inline__ saddr fde_compare (fde *x, fde *y)
{
  return (saddr)x->pc_begin - (saddr)y->pc_begin;
}

void func_FE_0D7C00 (fde_vector *linear, fde_vector *erratic)
{
  u32 count = linear->count;
  u32 linear_max = (u32) -1;
  u32 previous_max[count];
  u32 i, j;

  for (i = 0; i < count; i++)
    {
      for (j = linear_max;
           j != (u32) -1
           && fde_compare (linear->array[i], linear->array[j]) < 0;
           j = previous_max[j])
        {
          erratic->array[erratic->count++] = linear->array[j];
          linear->array[j] = (fde *) 0;
        }
      previous_max[i] = j;
      linear_max = i;
    }

  for (i = 0, j = 0; i < count; i++)
    if (linear->array[i] != (fde *) 0)
      linear->array[j++] = linear->array[i];
  linear->count = j;
}
