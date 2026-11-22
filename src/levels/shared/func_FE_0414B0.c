/* func_FE_0414B0 -- 264 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Parses a boolean word from a string into a byte; returns 1 when recognised.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01CC80.c.
 */

extern char D_FE_00124A58[];
extern char D_FE_00124A60[];
extern char D_FE_00124A68[];
extern char D_FE_00124A70[];
extern char D_FE_00124A78[];
extern char D_FE_00124A80[];
extern int strcasecmp(const char *a, const char *b);
extern void func_FE_041170(const char *src, char *buf);

int func_FE_0414B0(const char *src, char *out)
{
    char buf[0x200];

    func_FE_041170(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_FE_00124A58) || !strcasecmp(buf, D_FE_00124A60) || !strcasecmp(buf, D_FE_00124A68)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_FE_00124A70) || !strcasecmp(buf, D_FE_00124A78) || !strcasecmp(buf, D_FE_00124A80))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
