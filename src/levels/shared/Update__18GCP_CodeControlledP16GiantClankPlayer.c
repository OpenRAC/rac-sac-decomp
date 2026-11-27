/* Update__18GCP_CodeControlledP16GiantClankPlayer -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GiantClankPlayer {
    char pad[0xAEE];
    unsigned char flag;
} GiantClankPlayer;

int Update__18GCP_CodeControlledP16GiantClankPlayer(
    void *self, GiantClankPlayer *player)
{
    player->flag = 0;
    return -1;
}
