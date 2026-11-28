/* SECANIM_SetRightArmSecAnim__FP6PLAYERUiUiUiff -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Player {
    char pad[0x3DC];
    unsigned int a;
    unsigned int b;
    unsigned int unused;
    unsigned int c;
    float x;
    float y;
} Player;

void SECANIM_SetRightArmSecAnim__FP6PLAYERUiUiUiff(
    Player *self,
    unsigned int a,
    unsigned int b,
    unsigned int c,
    float x,
    float y)
{
    self->a = a;
    self->b = b;
    self->c = c;
    self->x = x;
    self->y = y;
}
