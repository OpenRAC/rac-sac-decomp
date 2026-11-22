/* HUD_GetScreenName__FUi -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Looks up an entry of the current object's table (index overridable by a
 * global) when the object is enabled; returns the entry data pointer or null.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0AE8C0.c.
 */

typedef struct Obj { int pad0; unsigned int flags; int pad8[3]; unsigned int count; char *entries[1]; } Obj;
extern Obj *D_FE_000FB47C;
extern int HUD_DebugScreenId;
extern unsigned char D_FE_000FB461;
char *HUD_GetScreenName__FUi(unsigned int index)
{
    Obj *o = D_FE_000FB47C;
    unsigned int sel = index;
    int ov;
    unsigned int flag;
    char *p;
    if (o == 0) return 0;
    ov = HUD_DebugScreenId;
    flag = o->flags & 1;
    D_FE_000FB461 = flag;
    if (ov != -1) sel = ov;
    if (flag == 0) return 0;
    if ((o->flags & 2) == 0) return 0;
    p = (char *)o->entries;
    if (sel >= o->count) return 0;
    p = ((char **)p)[sel];
    p += 8;
    return p;
}
