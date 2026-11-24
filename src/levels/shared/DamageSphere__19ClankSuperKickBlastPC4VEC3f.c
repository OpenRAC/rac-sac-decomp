/* DamageSphere__19ClankSuperKickBlastPC4VEC3f -- 224 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The blast sphere damages every moby of the collision category around the
 * given point (MOBYCOLL_FindMobysWithSphere, up to 0x20 mobys) by calling the
 * damage method of each one. The damage multiplier is 2, or 3 when the player
 * carries gadget 0x27, and it scales the player's base melee damage. The
 * multiplier and the radius live across the calls, so they are kept in
 * callee-saved float registers.
 */

typedef struct ClankSuperKickBlast ClankSuperKickBlast;
typedef struct Player Player;
typedef struct PlayerHolder PlayerHolder;
typedef struct Moby Moby;
typedef struct MobyType MobyType;
typedef struct VEC3 VEC3;

struct VEC3 {
    float x;
    float y;
    float z;
};

struct Player {
    char pad_00[0x20];
    void *f_20;
    char pad_24[0xC];
    void *f_30;
};

struct PlayerHolder {
    char pad_00[0x10];
    Player *f_10;
};

struct ClankSuperKickBlast {
    char pad_00[4];
    PlayerHolder *f_04;
};

struct Moby {
    char pad_00[0x40];
    MobyType *f_40;
};

struct MobyType {
    char pad_00[0x20];
    void (*f_20)(float damage, Moby *moby, int kind, int count, void *a,
                 void *b, Moby *self);
};

extern int GADGET_PlayerHasGadget__FUi(unsigned int gadget);
extern float PLAYER_GetBaseMeleeDamage__FP6PLAYER(Player *player);
extern int MOBYCOLL_FindMobysWithSphere__FPP4MobyiPC4VEC3fiii25MobyFormCollisionCategory(
    Moby **found, int maxCount, VEC3 *center, float radius, int kind,
    int count, int flags, int category);

void DamageSphere__19ClankSuperKickBlastPC4VEC3f(ClankSuperKickBlast *self,
                                                 VEC3 *center, float radius)
{
    Moby *found[32];
    Player *player = self->f_04->f_10;
    float damage;
    int count;
    int i;

    /* Gadget 0x27 is the record named "kicksplosion" in GADGET_g_GadgetList. */
    damage = GADGET_PlayerHasGadget__FUi(0x27) ? 3.0f : 2.0f;
    damage = damage * PLAYER_GetBaseMeleeDamage__FP6PLAYER(player);

    count =
        MOBYCOLL_FindMobysWithSphere__FPP4MobyiPC4VEC3fiii25MobyFormCollisionCategory(
            found, 32, center, radius, 0x69, 1, 0xAE3E, 1);

    for (i = 0; i < count; i++) {
        Moby *moby = found[i];

        if (moby->f_40->f_20) {
            moby->f_40->f_20(damage, moby, 2, 3, &player->f_30,
                             &player->f_20, moby);
        }
    }
}
