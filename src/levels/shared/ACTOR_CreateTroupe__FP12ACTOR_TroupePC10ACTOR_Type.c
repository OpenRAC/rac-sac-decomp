/* ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_09FB18.c.
 */

struct Link { int f0, f4, f8; struct Link *next, *prev; int value, f18; };
struct LinkHead { struct LinkHead *next, *prev; };
void ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(struct Link *node, int value)
{
    struct LinkHead *self = (struct LinkHead *)&node->next;
    node->value = value;
    node->f0 = 0;
    node->f4 = 0;
    node->f8 = 0;
    node->f18 = 0;
    self->prev = self;
    self->next = self;
}
