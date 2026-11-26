/* func_L01_16B878 -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores a value and a table of four helper results into a record, then runs a
 * finishing helper.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0EF6B0.c.
 */

struct Rec0EF6B0 {
    char pad_00[0x1C];
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    int w_2C;
};

void ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(struct Rec0EF6B0 *o, int a);
int SparkSprite_RegisterFasterSystem__FUi(int a);
int STREAK_RegisterParticleSystem__FUi(int a);
int FIRESMOKE_RegisterSystem__FUi(int a);
int FLASH_RegisterSystem__FUi(int a);
void func_L01_16B0C0(struct Rec0EF6B0 *o, int *c);

void func_L01_16B878(struct Rec0EF6B0 *o, int x, int *c, int y)
{
    ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(o, y);
    o->w_2C = x;
    o->w_1C = SparkSprite_RegisterFasterSystem__FUi(c[0]);
    o->w_20 = STREAK_RegisterParticleSystem__FUi(c[1]);
    o->w_24 = FIRESMOKE_RegisterSystem__FUi(c[2]);
    if (c[3] != 0) {
        o->w_28 = FLASH_RegisterSystem__FUi(c[3]);
    } else {
        o->w_28 = -1;
    }
    func_L01_16B0C0(o, c);
}
