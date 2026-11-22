/* GCSPAR_RefreshStreckConfig__FP26GCSPAR_StreckEmitterConfig -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the object's eight-bit count as a float.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_13CC10.c.
 */

typedef struct {
    char pad[0x18];
    unsigned int word;
    char pad1C[0x28 - 0x1C];
    float value;
} Obj;

void GCSPAR_RefreshStreckConfig__FP26GCSPAR_StreckEmitterConfig(Obj *obj)
{
    obj->value = (obj->word >> 24) & 0xFF;
}
