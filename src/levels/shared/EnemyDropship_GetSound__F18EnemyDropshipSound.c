/* EnemyDropship_GetSound__F18EnemyDropshipSound -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct EnemyDropshipSound {
    int a;
    int b;
} EnemyDropshipSound;

extern EnemyDropshipSound g_dropshipSounds[];

EnemyDropshipSound *EnemyDropship_GetSound__F18EnemyDropshipSound(int id)
{
    return g_dropshipSounds + id;
}
