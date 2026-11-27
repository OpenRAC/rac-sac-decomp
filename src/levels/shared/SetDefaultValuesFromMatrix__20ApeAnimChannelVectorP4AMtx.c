/* SetDefaultValuesFromMatrix__20ApeAnimChannelVectorP4AMtx -- 12 bytes.
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
    char pad[0x40];
    u128 def;
} ApeAnimChannelVector;

void SetDefaultValuesFromMatrix__20ApeAnimChannelVectorP4AMtx(
    ApeAnimChannelVector *this, AMtx *m)
{
    this->def = m->row3;
}
