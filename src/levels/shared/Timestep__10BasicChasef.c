/* Timestep__10BasicChasef -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct BasicChase {
    char pad[0x14];
    int frames;
} BasicChase;

void Timestep__10BasicChasef(BasicChase *self, float dt)
{
    (void)dt;
    self->frames -= 1;
}
