/* RATCHET_GetWeaponChildBones__FP7RATCHETPP18GDE_BoneComponents -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GDE_BoneComponents GDE_BoneComponents;

typedef struct RATCHET {
    char pad[0xE00];
} RATCHET;

void RATCHET_GetWeaponChildBones__FP7RATCHETPP18GDE_BoneComponents(
    RATCHET *self, GDE_BoneComponents **out)
{
    *out = (GDE_BoneComponents *)((char *)self + 0xE00);
}
