/* __do_global_dtors -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * It follows the form of GCC's crtstuff.c; see THIRD_PARTY_NOTICES.md.
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
