/* SetDirPrefix__7ApeFilePCc -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards the object to the shared handler.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E18.c.
 */

extern char D_FE_00256869[];

void Strcpy__9ApeStringPcPCc(void *, void *);

void SetDirPrefix__7ApeFilePCc(void *p)
{
    Strcpy__9ApeStringPcPCc(D_FE_00256869, p);
}
