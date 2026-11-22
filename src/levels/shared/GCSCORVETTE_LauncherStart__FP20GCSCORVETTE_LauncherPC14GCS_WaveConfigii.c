/* GCSCORVETTE_LauncherStart__FP20GCSCORVETTE_LauncherPC14GCS_WaveConfigii -- 164 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_104BF8.c.
 */

/* Initialize a sample with a randomized interval and caller metadata. */
extern int rand(void);
typedef struct Config { unsigned char pad0[0x20]; float base; unsigned char pad1[0x1c]; float low; unsigned char pad2[0x1c]; float high; unsigned char pad3[0x24]; float multiplier; } Config;
typedef struct Sample { Config *config; float value; void *first; void *second; } Sample;
void GCSCORVETTE_LauncherStart__FP20GCSCORVETTE_LauncherPC14GCS_WaveConfigii(Sample *sample, Config *config, void *first, void *second)
{
    float width = config->high - config->low;
    float low = config->low;
    float value = low + width * ((float)rand() * 4.656612873077392578125e-10f);
    sample->config = config;
    sample->value = (config->base + value) * config->multiplier;
    sample->first = first;
    sample->second = second;
}
