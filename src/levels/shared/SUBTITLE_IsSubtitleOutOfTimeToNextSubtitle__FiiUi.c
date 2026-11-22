/* SUBTITLE_IsSubtitleOutOfTimeToNextSubtitle__FiiUi -- 216 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tests whether the item found by the lookup at one position differs from the
 * item found after shifting that position by the pixel width of the item's
 * name (the name length times a global scale); returns 0 when there is no item
 * or no name.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0148E0.c.
 */

extern unsigned int strlen(const char *s);

typedef struct {
    int name;
} Item;

extern float g_cpf;
extern Item *SUBTITLE_FindSubtitleStruct__FiiUi(int a, int b, int c);
extern char *GetStr__Fi(int id);

int SUBTITLE_IsSubtitleOutOfTimeToNextSubtitle__FiiUi(int a, int b, int c)
{
    Item *p;
    char *name;
    int w;

    p = SUBTITLE_FindSubtitleStruct__FiiUi(a, b, c);
    if (p != 0) {
        name = GetStr__Fi(p->name);
        if (name != 0)
            w = (int)((float)strlen(name) * g_cpf);
        else
            w = 0;
        if (p != SUBTITLE_FindSubtitleStruct__FiiUi(a, b, c + w))
            return 1;
    }
    return 0;
}
