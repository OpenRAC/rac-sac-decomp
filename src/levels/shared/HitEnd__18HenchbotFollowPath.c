/* HitEnd__18HenchbotFollowPath -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Inner {
    char pad[0x14];
    int value;
} Inner;

typedef struct Mid {
    char pad[0xC];
    Inner *inner;
} Mid;

typedef struct HenchbotFollowPath {
    char pad[0x4];
    Mid *field;
    char gap[0x24];
    int next;
} HenchbotFollowPath;

void HitEnd__18HenchbotFollowPath(HenchbotFollowPath *self)
{
    self->field->inner->value = self->next;
}
