/* GetDuration__C19ApeAnimPlayAnimNode -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the duration at offset 8 of the anim def, or 0 when it is absent.
 */

typedef struct AnimDef {
    char pad[8];
    float duration;
} AnimDef;

typedef struct State {
    char pad[0x40];
    AnimDef *def;
} State;

float GetDuration__C19ApeAnimPlayAnimNode(const State *self)
{
    AnimDef *def = self->def;
    return def != 0 ? def->duration : 0.0f;
}
