/* Enter__13GCP_WalkStateP16GiantClankPlayer -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one word and stores 1 in a lower byte.
 */

typedef struct State {
    char pad[0x4];
    unsigned char flag;
    char gap[0x3];
    int field;
} State;

void Enter__13GCP_WalkStateP16GiantClankPlayer(State *self)
{
    self->field = 0;
    self->flag = 1;
}
