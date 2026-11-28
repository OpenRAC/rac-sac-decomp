/* Bolt_SetBoltCatchParam__Fff -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct BoltCatchParam {
    char pad[0x29C];
    float catchSq;
    float catchParam;
} BoltCatchParam;

extern BoltCatchParam D_L01_003AAD68;

void Bolt_SetBoltCatchParam__Fff(float catchRange, float catchParam)
{
    BoltCatchParam *p = &D_L01_003AAD68;

    p->catchSq = catchRange * catchRange;
    p->catchParam = catchParam;
}
