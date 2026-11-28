/* SetDefaultValuesFromVector__20ApeAnimChannelVectorP5AVec4 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));

typedef struct AVec4 {
    u128 v;
} AVec4;

typedef struct ApeAnimChannelVector {
    char pad[0x40];
    u128 def;
} ApeAnimChannelVector;

void SetDefaultValuesFromVector__20ApeAnimChannelVectorP5AVec4(
    ApeAnimChannelVector *this, AVec4 *v)
{
    this->def = v->v;
}
