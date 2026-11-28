/* Begin__21HenchbotCarnival_Wait -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Leaf {
    unsigned char pad[0x64];
    unsigned int flags;
} Leaf;

typedef struct Mid {
    unsigned char pad[0x10];
    Leaf *leaf;
} Mid;

typedef struct Wait {
    unsigned char pad[4];
    Mid *mid;
} Wait;

void Begin__21HenchbotCarnival_Wait(Wait *self)
{
    self->mid->leaf->flags |= 0x20;
}
