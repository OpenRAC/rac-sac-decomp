/* Setup__15GadgetBotAttack -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GadgetBotAttack {
    char pad[0xC];
    float scale;
    int clear;
} GadgetBotAttack;

void Setup__15GadgetBotAttack(GadgetBotAttack *self)
{
    self->clear = 0;
    self->scale = 0.5f;
}
