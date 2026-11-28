/* GCS_MissileGetModel__F18GCS_MissileModelID -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GCS_MissileModel {
    char pad[0x14];
} GCS_MissileModel;

extern GCS_MissileModel g_missileModels[];

GCS_MissileModel *GCS_MissileGetModel__F18GCS_MissileModelID(int id)
{
    return g_missileModels + id;
}
