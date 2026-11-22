/* func_FE_0D6650 -- 816 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * C++ exception throw helper: walks the caller frames for a handler and
 * unwinds the saved registers to it. Ported from OpenRAC/rac2-decomp
 * src/core/00120390.c (eh_throw_helper).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_024A70.c.
 */

/* libgcc _eh.o: throw_helper, the common grunt work of a throw, from the
   L_eh section of GCC's libgcc2.c (GPL version 2-or-later with the libgcc
   linking exception). `frame_state` is frame.h's with FIRST_PSEUDO_REGISTER 79
   and the 64-bit `long` of this ABI. */

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

struct eh_context
{
  void *handler_label;
  void **dynamic_handler_chain;
  void *info;
  void *table_index;
};

typedef struct exception_descriptor
{
  void *runtime_id_field;
} exception_descriptor;

#define NEW_EH_RUNTIME ((void *) -2)

#define REG_SAVED_REG 2

extern void __terminate(void);
extern void __unwinding_cleanup(void);
extern void *func_FE_0D6368(void *, void *, void *, int, int *);
extern void *func_FE_0D6290(void *, void *);
extern frame_state *func_FE_0D65B8(void *, frame_state *, frame_state *);
extern void *func_FE_0D64B0(int, void *, int);
extern void *func_FE_0D6538(int, void *, void *);
extern void *memcpy(void *, const void *, unsigned int);

/* Walks up the call stack looking for the code that handles a thrown exception and prepares to jump to it. */
void *func_FE_0D6650(struct eh_context *eh, void *pc, frame_state *my_udata,
		    frame_state **udata_p)
{
  frame_state *udata = *udata_p;
  frame_state ustruct;
  frame_state *sub_udata = &ustruct;
  void *saved_pc = pc;
  void *handler;
  void *handler_p;
  void *pc_p;
  frame_state saved_ustruct;
  int new_eh_model;
  int cleanup = 0;
  int only_cleanup = 0;
  int rethrow = 0;
  int saved_state = 0;
  void *eh_info = eh->info;

  /* Do we find a handler based on a re-throw PC? */
  if (eh->table_index != (void *) 0)
    rethrow = 1;

  handler = (void *) 0;
  for (;;)
    {
      frame_state *p = udata;
      udata = func_FE_0D65B8 (pc, udata, sub_udata);
      sub_udata = p;

      /* If we couldn't find the next frame, we lose.  */
      if (! udata)
	break;

      if (udata->eh_ptr == 0)
        new_eh_model = 0;
      else
        new_eh_model = (((exception_descriptor *)(udata->eh_ptr))->
                                          runtime_id_field == NEW_EH_RUNTIME);

      if (rethrow)
        {
          rethrow = 0;
          handler = func_FE_0D6368 (eh->table_index, udata->eh_ptr,
                                   eh_info, 1, &cleanup);
          eh->table_index = (void *)0;
        }
      else
        if (new_eh_model)
          handler = func_FE_0D6368 (pc, udata->eh_ptr, eh_info,
                                   0, &cleanup);
        else
          handler = func_FE_0D6290 (pc, udata->eh_ptr);

      /* If we found one, we can stop searching, if its not a cleanup.
         for cleanups, we save the state, and keep looking. This allows
         us to call a debug hook if there are nothing but cleanups left. */
      if (handler)
	if (cleanup)
	  {
	    if (!saved_state)
	      {
		saved_ustruct = *udata;
		handler_p = handler;
		pc_p = pc;
		saved_state = 1;
		only_cleanup = 1;
	      }
	  }
	else
	  {
	    only_cleanup = 0;
	    break;
	  }

      /* Otherwise, we continue searching.  We subtract 1 from PC to avoid
	 hitting the beginning of the next region.  */
      {
        long long value = *(long long *)func_FE_0D64B0 (udata->retaddr_column, udata,
					    (int)sub_udata);
        pc = (void *)((int)value - 1);
      }
    }

  if (saved_state)
    {
      udata = &saved_ustruct;
      handler = handler_p;
      pc = pc_p;
      if (only_cleanup)
        __unwinding_cleanup ();
    }

  /* If we haven't found a handler by now, this is an unhandled
     exception.  */
  if (! handler)
    __terminate ();

  eh->handler_label = handler;

  if (pc == saved_pc)
    /* We found a handler in the throw context, no need to unwind.  */
    udata = my_udata;
  else
    {
      int i;

      /* Unwind all the frames between this one and the handler by copying
	 their saved register values into our register save slots.  */

      /* Remember the PC where we found the handler.  */
      void *handler_pc = pc;

      /* Start from the throw context again.  */
      pc = saved_pc;
      memcpy (udata, my_udata, sizeof (*udata));

      while (pc != handler_pc)
	{
	  frame_state *p = udata;
	  udata = func_FE_0D65B8 (pc, udata, sub_udata);
	  sub_udata = p;

	  for (i = 0; i < FIRST_PSEUDO_REGISTER; ++i)
	    if (i != udata->retaddr_column && udata->saved[i])
	      func_FE_0D6538 (i, udata, my_udata);

	  {
	    long long value = *(long long *)func_FE_0D64B0 (udata->retaddr_column, udata,
						(int)sub_udata);
	    pc = (void *)((int)value - 1);
	  }
	}

      /* But we do need to update the saved return address register from
	 the last frame we unwind, or the handler frame will have the wrong
	 return address.  */
      if (udata->saved[udata->retaddr_column] == REG_SAVED_REG)
	{
	  i = udata->reg_or_offset[udata->retaddr_column];
	}
    }
  /* udata now refers to the frame called by the handler frame.  */

  *udata_p = udata;
  return handler;
}
