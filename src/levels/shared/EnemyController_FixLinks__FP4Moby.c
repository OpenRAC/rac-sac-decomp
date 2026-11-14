/* EnemyController_FixLinks__FP4Moby -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby Moby;
typedef struct MobyExtra MobyExtra;

struct Moby {
    unsigned char reserved_000[0x58];
    MobyExtra *extra;
};

extern void *memset(void *dst, int value, unsigned int count);

void EnemyController_FixLinks__FP4Moby(Moby *moby)
{
    memset(moby->extra, 0, 0x19C);
}
