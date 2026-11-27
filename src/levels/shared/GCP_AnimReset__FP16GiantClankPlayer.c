/* GCP_AnimReset__FP16GiantClankPlayer -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GiantClankPlayer {
    char pad[0xBBC];
    int anim_a;
    int anim_b;
    int anim_c;
} GiantClankPlayer;

void GCP_AnimReset__FP16GiantClankPlayer(GiantClankPlayer *self)
{
    self->anim_a = -1;
    self->anim_b = -1;
    self->anim_c = 0;
}
