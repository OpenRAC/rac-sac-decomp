/* Spawner_CreateTemplate__FP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby {
    unsigned char pad[0x80];
} Moby;

typedef struct Level {
    unsigned char pad[0x44];
    Moby *pool;
} Level;

extern Level *g_level;

int Spawner_CreateTemplate__FP4Moby(Moby *moby)
{
    return moby - g_level->pool;
}
