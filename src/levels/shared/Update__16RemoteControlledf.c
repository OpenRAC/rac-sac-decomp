/* Update__16RemoteControlledf -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Leaf {
    char pad[0x373];
    unsigned char flag;
} Leaf;

typedef struct Mid {
    char pad[0x10];
    Leaf *leaf;
} Mid;

typedef struct RemoteControlled {
    char pad[0x4];
    Mid *mid;
} RemoteControlled;

void Update__16RemoteControlledf(RemoteControlled *self, float dt)
{
    self->mid->leaf->flag = 1;
}
