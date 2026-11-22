/* __srefill -- 360 bytes.
 *
 * A function of the boot executable at 0x001864A0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__srefill.c.
 */

/* __srefill -- RAC5 boot body, w11/s1.
 *
 * Provenance: newlib libc/stdio/refill.c (Copyright (c) 1990 The Regents of the
 * University of California), EE newlib snapshot
 * D:/RAC2/master/build/sdk-compiler-build/source/ee/newlib/libc/stdio/refill.c.
 * Body (and the file-static func_00186480) verbatim; FILE/_reent prefixes, CHECK_INIT,
 * HASUB/FREEUB restated from sys/reent.h and stdio/local.h of the same
 * snapshot. Retail: , interval 360 bytes. Toolchain: SN ProDG 3.01
 * ee-gcc2953 (GCC 2.95.3) -O2 -G0, Ps2EeAs.exe, SN ld.exe.
 */
typedef unsigned int size_t;

struct __sbuf {
  unsigned char *_base;
  int _size;
};

typedef struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;
  void *_cookie;
  int (*_read) (void *, char *, int);
  int (*_write) (void *, const char *, int);
  long (*_seek) (void *, long, int);
  int (*_close) (void *);
  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;
  unsigned char _ubuf[3];
  unsigned char _nbuf[1];
  struct __sbuf _lb;
  int _blksize;
  int _offset;
  struct _reent *_data;
} FILE;

struct _reent {
  int _errno;
  FILE *_stdin;
  FILE *_stdout;
  FILE *_stderr;
  int _inc;
  char _emergency[25];
  int _current_category;
  const char *_current_locale;
  int __sdidinit;
};

extern struct _reent *D_001CF8E4;
extern void func_001858A0 (struct _reent *);
extern int func_00186130 (struct _reent *, int (*) (FILE *));
extern void func_00186250 (FILE *);
extern void _free_r (struct _reent *, void *);
extern int func_001855E0 (FILE *);

#define _REENT D_001CF8E4
#define NULL ((void *) 0)
#define CHECK_INIT(fp) \
  do \
    { \
      if ((fp)->_data == 0) \
	(fp)->_data = _REENT; \
      if (!(fp)->_data->__sdidinit) \
	func_001858A0 ((fp)->_data); \
    } \
  while (0)
#define HASUB(fp) ((fp)->_ub._base != NULL)
#define FREEUB(fp) { \
	if ((fp)->_ub._base != (fp)->_ubuf) \
		_free_r (fp->_data, (char *) (fp)->_ub._base); \
	(fp)->_ub._base = NULL; }

#define __SLBF 0x0001
#define __SNBF 0x0002
#define __SRD  0x0004
#define __SWR  0x0008
#define __SRW  0x0010
#define __SEOF 0x0020
#define __SERR 0x0040
#define __SMOD 0x2000
#define EOF (-1)

extern int func_00186480 (FILE *);

/*
 * Refill a stdio buffer.
 * Return EOF on eof or error, 0 otherwise.
 */

int
__srefill (FILE *fp)
{
  /* make sure stdio is set up */

  CHECK_INIT (fp);

  fp->_r = 0;			/* largely a convenience for callers */

  /* SysV does not make this test; take it out for compatibility */
  if (fp->_flags & __SEOF)
    return EOF;

  /* if not already reading, have to be reading and writing */
  if ((fp->_flags & __SRD) == 0)
    {
      if ((fp->_flags & __SRW) == 0)
	return EOF;
      /* switch to reading */
      if (fp->_flags & __SWR)
	{
	  if (func_001855E0 (fp))
	    return EOF;
	  fp->_flags &= ~__SWR;
	  fp->_w = 0;
	  fp->_lbfsize = 0;
	}
      fp->_flags |= __SRD;
    }
  else
    {
      /*
 * We were reading. If there is an ungetc buffer,
 * we must have been reading from that. Drop it,
 * restoring the previous buffer (if any). If there
 * is anything in that buffer, return.
 */
      if (HASUB (fp))
	{
	  /* FREEUB (fp) is absent from the retail revision: measured, the
 block loads _ur/_up and never calls _free_r nor clears _ub._base. */
	  if ((fp->_r = fp->_ur) != 0)
	    {
	      fp->_p = fp->_up;
	      return 0;
	    }
	}
    }

  if (fp->_bf._base == NULL)
    func_00186250 (fp);

  /*
 * Before reading from a line buffered or unbuffered file,
 * flush all line buffered output files, per the ANSI C
 * standard.
 */

  if (fp->_flags & (__SLBF | __SNBF))
    (void) func_00186130 (fp->_data, func_00186480);
  fp->_p = fp->_bf._base;
  fp->_r = (*fp->_read) (fp->_cookie, (char *) fp->_p, fp->_bf._size);
  fp->_flags &= ~__SMOD;	/* buffer contents are again pristine */
  if (fp->_r <= 0)
    {
      if (fp->_r == 0)
	fp->_flags |= __SEOF;
      else
	{
	  fp->_r = 0;
	  fp->_flags |= __SERR;
	}
      return EOF;
    }
  return 0;
}
