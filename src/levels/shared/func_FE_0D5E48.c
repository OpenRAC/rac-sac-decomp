/* func_FE_0D5E48 -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Allocates and clears a new 24-byte record for exception handling. Ported
 * from rac2-decomp src/core/00120390.c (eh_alloc_context).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_024268.c.
 */

extern void *malloc(unsigned int);
extern void *memset(unsigned char *, int, int);
extern void __terminate(void);

char *func_FE_0D5E48(void) {
    char *record = malloc(24);
    if (record == 0) __terminate();
    memset((unsigned char *)record, 0, 24);
    *(char **)(record + 4) = record + 16;
    return record;
}
