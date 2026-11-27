/* GADGET_IsDbaseInitedLifetime__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Dbase {
    int pad;
    int flags;
} Dbase;

extern Dbase *g_dbase;

int GADGET_IsDbaseInitedLifetime__Fv(void)
{
    return g_dbase->flags & 1;
}
