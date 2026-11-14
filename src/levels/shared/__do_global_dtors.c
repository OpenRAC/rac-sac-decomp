/* __do_global_dtors -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * It follows the form of GCC's crtstuff.c; see THIRD_PARTY_NOTICES.md.
 *
 * EE-GCC 2.9 crt linkage routine: walks the list of global destructors. The
 * list cursor is a module-local data word of type char *; each entry is a
 * destructor pointer and the list ends on a null entry. The cursor is
 * incremented before the call, so the entry is loaded through the new cursor
 * address (offset -4); the char * type is what makes the retail code do this.
 * The cursor is declared extern so that it is placed at its retail address.
 */

typedef void (*dtor_entry)(void);

/* a word of the module (a local relocation of the retail body) */
extern char *D_FE_00108AE8;

void __do_global_dtors(void)
{
    while (*(dtor_entry *)D_FE_00108AE8) {
        D_FE_00108AE8 = D_FE_00108AE8 + 4;
        ((dtor_entry)*(dtor_entry *)(D_FE_00108AE8 - 4))();
    }
}
