/* CameraHint_Term__FP4Moby -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs a helper on the object when its record has a flag byte set.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/05_medical_outpost/LEVEL_05_152058.c.
 */

typedef struct { char pad00[0x27]; unsigned char flag; } Rec;
typedef struct { char pad00[0x54]; Rec *rec; } Obj;
extern void LEVEL_DontRespawnMobyAfterCheckpoint__FP4Moby(Obj *o);

void CameraHint_Term__FP4Moby(Obj *o)
{
    if (o->rec->flag) {
        LEVEL_DontRespawnMobyAfterCheckpoint__FP4Moby(o);
    }
}
