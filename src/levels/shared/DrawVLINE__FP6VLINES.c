/* DrawVLINE__FP6VLINES -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct UBE_VERT UBE_VERT;
typedef struct VLINES {
    unsigned char unknown_000[0x0C];
    unsigned int param;
} VLINES;

extern void DrawLines__FPC9PUBE_VERTUiUi(UBE_VERT *verts, unsigned int count,
                                        unsigned int param);

void DrawVLINE__FP6VLINES(VLINES *lines)
{
    DrawLines__FPC9PUBE_VERTUiUi((UBE_VERT *)lines, 2, lines->param);
}
