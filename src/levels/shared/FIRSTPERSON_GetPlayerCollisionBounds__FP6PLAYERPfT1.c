/* FIRSTPERSON_GetPlayerCollisionBounds__FP6PLAYERPfT1 -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies two consecutive floats into two outputs.
 */

typedef struct Player {
    char pad[1792];
    float left;
    float right;
} Player;

void FIRSTPERSON_GetPlayerCollisionBounds__FP6PLAYERPfT1(Player *self, float *left, float *right)
{
    *left = self->left;
    *right = self->right;
}
