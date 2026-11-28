/* Timestep__18OperaAlienLargeBudf -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct OperaAlienLargeBud {
    char pad[0xC];
    float time;
} OperaAlienLargeBud;

void Timestep__18OperaAlienLargeBudf(OperaAlienLargeBud *self, float dt)
{
    self->time += dt;
}
