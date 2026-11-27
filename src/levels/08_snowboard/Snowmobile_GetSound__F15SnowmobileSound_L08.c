/* Snowmobile_GetSound__F15SnowmobileSound -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct SnowmobileSound {
    unsigned char pad[8];
} SnowmobileSound;

extern SnowmobileSound g_snowmobileSounds[];

SnowmobileSound *Snowmobile_GetSound__F15SnowmobileSound(int sound)
{
    return &g_snowmobileSounds[sound];
}
