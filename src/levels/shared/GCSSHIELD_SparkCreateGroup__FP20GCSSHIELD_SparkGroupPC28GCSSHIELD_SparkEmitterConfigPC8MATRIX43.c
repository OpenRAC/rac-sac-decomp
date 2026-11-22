/* GCSSHIELD_SparkCreateGroup__FP20GCSSHIELD_SparkGroupPC28GCSSHIELD_SparkEmitterConfigPC8MATRIX43 -- 112 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_129888.c.
 */

/* LEVEL_15.REL:129888 -- links the new record to the source object: runs
   PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode, stores the two references, clears the three words at 0x18 and
   copies the two floats at 0x20 and 0x24 of the stored reference. */
typedef struct {
    char pad_00[0x14];
    int f_14;
    int f_18;
    int f_1C;
    float f_20;
    float f_24;
    float f_28;
    int f_2C;
} Obj;

typedef struct {
    char pad_00[0x20];
    float f_20;
    float f_24;
    char pad_28[0x18];
    int f_40;
} Inner;

extern void PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode(Obj *a0, int a1, int a2);

void GCSSHIELD_SparkCreateGroup__FP20GCSSHIELD_SparkGroupPC28GCSSHIELD_SparkEmitterConfigPC8MATRIX43(Obj *a0, Inner *a1, void *a2)
{
    PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode(a0, a1->f_40, 0);
    a0->f_14 = (int)a1;
    a0->f_2C = (int)a2;
    {
        int *w = &a0->f_18;

        w[0] = 0;
        w[1] = 0;
        w[2] = 0;
    }
    a0->f_24 = ((Inner *)a0->f_14)->f_20;
    a0->f_28 = ((Inner *)a0->f_14)->f_24;
}
