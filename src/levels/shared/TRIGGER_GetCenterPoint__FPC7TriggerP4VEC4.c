/* TRIGGER_GetCenterPoint__FPC7TriggerP4VEC4 -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_084EC8.c.
 */

typedef struct {
    char pad[0x34];
    float f34;
    float f38;
    float f3C;
    float f40;
} Src;

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} Dst;

void TRIGGER_GetCenterPoint__FPC7TriggerP4VEC4(Src *a0, Dst *a1)
{
    float *s = (float *)((char *)a0 + 0x34);

    a1->f00 = s[0];
    a1->f04 = s[1];
    a1->f08 = s[2];
    a1->f0C = s[3];
}
