/* SetMatrix__20ApeAnimChannelVectorP4AMtx -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));

typedef struct AMtx {
    char pad[0x30];
    u128 row3;
} AMtx;

typedef struct ApeAnimChannelVector {
    char pad[4];
    AMtx *mtx;
    char pad2[0x28];
    u128 at30;
} ApeAnimChannelVector;

void SetMatrix__20ApeAnimChannelVectorP4AMtx(ApeAnimChannelVector *this, AMtx *m)
{
    this->mtx = m;
    this->at30 = m->row3;
}
