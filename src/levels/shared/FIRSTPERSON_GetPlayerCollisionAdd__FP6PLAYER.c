/* FIRSTPERSON_GetPlayerCollisionAdd__FP6PLAYER -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct PLAYER {
    char pad[0x704];
    float collision;
    float collisionBase;
} PLAYER;

float FIRSTPERSON_GetPlayerCollisionAdd__FP6PLAYER(PLAYER *self)
{
    return self->collision - self->collisionBase;
}
