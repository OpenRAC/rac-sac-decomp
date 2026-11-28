/* GCSLETTER_DamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GCS_HitInfo {
    char pad[4];
    float damage;
} GCS_HitInfo;

typedef struct Letter {
    char pad[0x23C];
    float health;
} Letter;

void GCSLETTER_DamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo(
    char *collider, void *unused0, void *unused1, GCS_HitInfo *hit)
{
    Letter *self;

    self = (Letter *)(collider - 0x248);
    self->health -= hit->damage;
}
