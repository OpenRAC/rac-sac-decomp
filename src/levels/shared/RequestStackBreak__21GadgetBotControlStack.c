/* RequestStackBreak__21GadgetBotControlStack -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Leaf {
    int value;
} Leaf;

typedef struct Mid {
    char pad[0xC];
    Leaf *leaf;
} Mid;

typedef struct GadgetBotControlStack {
    char pad[0x4];
    Mid *mid;
} GadgetBotControlStack;

void RequestStackBreak__21GadgetBotControlStack(GadgetBotControlStack *self)
{
    self->mid->leaf->value = 1;
}
