/* BREAKABLE_SetInvincible__FP3Tieb -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets or clears bit 0 of the looked-up object's flag byte.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/05_medical_outpost/LEVEL_05_02A888.c.
 */

typedef struct {
    char pad[0x45];
    unsigned char flags;
} Obj;

extern Obj *TIE_GetBreakable__FP3Tie(int id);

void BREAKABLE_SetInvincible__FP3Tieb(int id, int enable)
{
    Obj *obj = TIE_GetBreakable__FP3Tie(id);

    if (obj != 0) {
        if (enable)
            obj->flags |= 1;
        else
            obj->flags &= ~1;
    }
}
