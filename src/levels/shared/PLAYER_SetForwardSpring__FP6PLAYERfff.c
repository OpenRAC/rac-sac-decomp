/* PLAYER_SetForwardSpring__FP6PLAYERfff -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct PLAYER {
    char pad[0x128];
    float x;
    float y;
    float z;
} PLAYER;

void PLAYER_SetForwardSpring__FP6PLAYERfff(PLAYER *self, float x, float y, float z)
{
    self->x = x;
    self->y = y;
    self->z = z;
}
