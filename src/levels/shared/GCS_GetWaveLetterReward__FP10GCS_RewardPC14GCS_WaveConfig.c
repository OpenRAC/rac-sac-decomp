/* GCS_GetWaveLetterReward__FP10GCS_RewardPC14GCS_WaveConfig -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GCS_Reward {
    int a;
    int b;
    int c;
    int d;
} GCS_Reward;

int GCS_GetWaveLetterReward__FP10GCS_RewardPC14GCS_WaveConfig(GCS_Reward *reward, void *config)
{
    reward->a = 0;
    reward->b = 0;
    reward->c = 0;
    reward->d = 0;
    return 0;
}
