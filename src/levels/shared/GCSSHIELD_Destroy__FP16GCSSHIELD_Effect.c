/* GCSSHIELD_Destroy__FP16GCSSHIELD_Effect -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Updates the object's two 0x34-byte sub records.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_12A158.c.
 */

typedef struct {
    char pad[0x34];
} Elem;

typedef struct {
    int pad0;
    Elem elems[2];
} Obj;

extern void GCSSHIELD_SparkDestroyGroup__FP20GCSSHIELD_SparkGroup(Elem *);

void GCSSHIELD_Destroy__FP16GCSSHIELD_Effect(Obj *obj)
{
    unsigned int i;

    for (i = 0; i < 2; i++)
        GCSSHIELD_SparkDestroyGroup__FP20GCSSHIELD_SparkGroup(&obj->elems[i]);
}
