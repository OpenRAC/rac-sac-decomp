/* __rethrow -- 484 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Rethrows the current exception from a given table entry and jumps to its
 * handler. Ported from rac2-decomp src/core/001210E0-unwind.c (__rethrow).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/__rethrow.c.
 */

/* libgcc _eh.o: __rethrow, adapted from the public GNU EE libgcc2.c
 * (gnu-ee-binutils-gcc-1.1, GPL-2.0-or-later with the libgcc linking exception).
 * The sibling retained __throw establishes the same two frame_state objects;
 * this variant also records the supplied exception-table index.
 * FIRST_PSEUDO_REGISTER=79 and the EE 64-bit long give the measured 0x2F0
 * frame_state extent. All register-save operations come from the compiler's
 * public unwind builtins, not ad-hoc instruction sequences.
 */
#define FIRST_PSEUDO_REGISTER 79

typedef struct frame_state
{
  void *cfa;
  void *eh_ptr;
  long cfa_offset;
  long args_size;
  long reg_or_offset[FIRST_PSEUDO_REGISTER+1];
  unsigned short cfa_reg;
  unsigned short retaddr_column;
  char saved[FIRST_PSEUDO_REGISTER+1];
} frame_state;
typedef char FrameStateExtent[sizeof(frame_state) == 0x2F0 ? 1 : -1];

struct eh_context
{
  void *handler_label;
  void **dynamic_handler_chain;
  void *info;
  void *table_index;
};

extern char *(*D_FE_0010C624)(void);

extern void __terminate(void);
extern void *memcpy(void *, const void *, unsigned int);

extern struct frame_state *__frame_state_for(void *, struct frame_state *);

extern void *func_FE_0D6650(struct eh_context *, void *, frame_state *,
			   frame_state **);

/* We first search for an exception handler, and if we don't find it, we call
   __terminate on the current stack frame so that we may use the debugger to
   walk the stack and understand why no handler was found. If we find one,
   then we unwind the frames down to the one that has the handler and transfer
   control into the handler.  */

void __rethrow(void *index)
{
  struct eh_context *eh = (struct eh_context *)(*D_FE_0010C624) ();
  void *pc, *handler;
  frame_state ustruct;
  frame_state *udata = &ustruct;
  frame_state my_ustruct, *my_udata = &my_ustruct;

  /* This is required for C++ semantics.  We must call terminate if we
     try and rethrow an exception, when there is no exception currently
     active.  */
  if (! eh->info)
    __terminate ();

  eh->table_index = index;

  /* Start at our stack frame.  */
label:
  udata = __frame_state_for (&&label, udata);
  if (! udata)
    __terminate ();

  /* We need to get the value from the CFA register. */
  udata->cfa = __builtin_dwarf_cfa ();

  memcpy (my_udata, udata, sizeof (*udata));

  /* Do any necessary initialization to access arbitrary stack frames.
     On the SPARC, this means flushing the register windows.  */
  __builtin_unwind_init ();

  /* Now reset pc to the right throw point.  */
  pc = __builtin_extract_return_addr (__builtin_return_address (0)) - 1;

  handler = func_FE_0D6650 (eh, pc, my_udata, &udata);

  /* Now go!  */

  __builtin_eh_return ((void *)eh,
		       udata->cfa - my_udata->cfa,
		       handler);

  /* Epilogue:  restore the handler frame's register values and return
     to the stub.  */
}
