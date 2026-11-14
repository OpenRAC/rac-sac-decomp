/* DrawVLINE__FP6VLINES -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * A VLINES block holds two vertices and a parameter at offset 0x0C. It is
 * drawn by DrawLines: the same vertex block is the first argument, the mode is
 * the constant 2, and the segment count comes from the field at offset 0xC of
 * the block.
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
