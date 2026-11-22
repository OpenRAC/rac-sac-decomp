/* ElectroBall_Init__FP4Moby -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Initialises the record behind the object: two zeroed slots, two ramp values
 * 0 and 3.5, unit scale and cleared state fields; returns 1.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_16AB60.c.
 */

typedef struct Rec {
    int w00;
    int slot[2];
    float ramp[2];
    int w14;
    float scale;
    int w1C;
    int w20;
    int w24;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

int ElectroBall_Init__FP4Moby(Obj *o)
{
    Rec *r;
    unsigned int i;
    float x;

    r = o->rec;
    x = 0.0f;
    r->w00 = 0;
    for (i = 0; i < 2; i++) {
        r->slot[i] = 0;
        r->ramp[i] = x;
        x += 3.5f;
    }
    r->w20 = -1;
    r->scale = 1.0f;
    r->w14 = 0;
    r->w1C = 0;
    r->w24 = 0;
    return 1;
}
