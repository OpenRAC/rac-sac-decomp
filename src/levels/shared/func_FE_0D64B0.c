/* func_FE_0D64B0 -- 136 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Finds where a saved register lives for a stack frame (address of its saved
 * slot). Ported from OpenRAC/rac2-decomp src/core/00120A30.c
 * (eh_get_saved_register_addr).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0248D0.c.
 */

/* libgcc _eh.o: get_reg_addr, from the L_eh section of GCC's libgcc2.c. frame_state is
   frame.h's with FIRST_PSEUDO_REGISTER 79; in_reg_window is the target's return-0
   variant. GPL-2.0-or-later with the libgcc linking exception below. */
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

typedef int word_type __attribute__ ((mode (__word__)));

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

#define REG_SAVED_OFFSET 1
#define REG_SAVED_REG 2
#define NULL ((void *) 0)
extern void abort ();

static inline int in_reg_window (int reg, frame_state *udata) { return 0; }

/* Get the address of register REG as saved in UDATA, where SUB_UDATA is a
   frame called by UDATA or 0.  */

word_type * func_FE_0D64B0 (unsigned reg, frame_state *udata, frame_state *sub_udata)
{
  while (udata->saved[reg] == REG_SAVED_REG)
    {
      reg = udata->reg_or_offset[reg];
      if (in_reg_window (reg, udata))
	{
          udata = sub_udata;
	  sub_udata = NULL;
	}
    }
  if (udata->saved[reg] == REG_SAVED_OFFSET)
    return (word_type *)(udata->cfa + udata->reg_or_offset[reg]);
  else
    abort ();
}
