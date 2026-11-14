/* SetMatrix__20ApeAnimChannelMatrixP4AMtx -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeAnimChannelMatrix ApeAnimChannelMatrix;
typedef struct AMtx AMtx;

struct ApeAnimChannelMatrix
{
    char pad_00[0x4];
    AMtx *matrix;
};

void SetMatrix__20ApeAnimChannelMatrixP4AMtx(ApeAnimChannelMatrix *self, AMtx *matrix)
{
    self->matrix = matrix;
}
