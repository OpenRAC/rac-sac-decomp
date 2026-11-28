/* SoundCrossfader_ConfigRefresh__FP21SoundCrossfaderConfig -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct SoundCrossfaderConfig {
    float value;
    float pad;
    float inv;
} SoundCrossfaderConfig;

void SoundCrossfader_ConfigRefresh__FP21SoundCrossfaderConfig(SoundCrossfaderConfig *cfg)
{
    cfg->inv = 1.0f / cfg->value;
}
