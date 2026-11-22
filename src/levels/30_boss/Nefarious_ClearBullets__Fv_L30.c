/* Nefarious_ClearBullets__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E40.c.
 */

extern char D_L30_0039FF08[];

void ACTOR_ClearTroupe__FP12ACTOR_Troupe(void *);

void Nefarious_ClearBullets__Fv(float a, float b, float c, float d)
{
    ACTOR_ClearTroupe__FP12ACTOR_Troupe(D_L30_0039FF08);
}
