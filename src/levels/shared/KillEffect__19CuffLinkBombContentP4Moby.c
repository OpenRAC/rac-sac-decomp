/* KillEffect__19CuffLinkBombContentP4Moby -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby Moby;
typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;
typedef struct CuffLinkBombContent CuffLinkBombContent;

struct Moby {
    unsigned char unknown_000[0x30];
    VEC3 pos;
};

struct CuffLinkBombContent {
    VEC3 unknown_000;
    Moby *bomb;
};

extern void CuffLinkBomb_Explode__FP4MobyPC4VEC3(Moby *moby, VEC3 *pos);

void KillEffect__19CuffLinkBombContentP4Moby(CuffLinkBombContent *self, Moby *moby)
{
    CuffLinkBomb_Explode__FP4MobyPC4VEC3(self->bomb, &moby->pos);
}
