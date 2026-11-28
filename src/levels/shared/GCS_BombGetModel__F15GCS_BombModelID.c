/* GCS_BombGetModel__F15GCS_BombModelID -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GCS_BombModel {
    char pad[0x14];
} GCS_BombModel;

extern GCS_BombModel g_bombModels[];

GCS_BombModel *GCS_BombGetModel__F15GCS_BombModelID(int id)
{
    return g_bombModels + id;
}
