/* FireSnake_Fade__FP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby {
    char pad[0x45];
    unsigned char state;
    char gap[0x70 - 0x46];
    float timer;
} Moby;

void FireSnake_Fade__FP4Moby(Moby *moby)
{
    moby->state = 1;
    moby->timer = 15.0f;
}
