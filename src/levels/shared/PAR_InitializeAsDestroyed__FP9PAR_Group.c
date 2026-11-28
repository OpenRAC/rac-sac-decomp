/* PAR_InitializeAsDestroyed__FP9PAR_Group -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct PAR_Group {
    char pad[0x10];
    unsigned short flags;
} PAR_Group;

void PAR_InitializeAsDestroyed__FP9PAR_Group(PAR_Group *self)
{
    self->flags = 0x100;
}
