/* GCS_FIRECRACKER_Register__FP28GCS_FIRECRACKER_SortedTroupeP28GCS_FIRECRACKER_SortedConfigPC24GCS_FIRECRACKER_MaterialPC10ACTOR_Type -- 144 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores four resolved handles from a source table into the object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_114940.c.
 */

void ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(void *a0, int a1);
void GCS_FIRECRACKER_RefreshConfig__FP28GCS_FIRECRACKER_SortedConfig(int a0);
int GCS_SPARK_RegisterSystem__FUi(int a0);
int GCS_STREAK_RegisterParticleSystem__FUi(int a0);
int GCS_FIRESMOKE_RegisterSystem__FUi(int a0);
int FLASH_RegisterSystem__FUi(int a0);

void GCS_FIRECRACKER_Register__FP28GCS_FIRECRACKER_SortedTroupeP28GCS_FIRECRACKER_SortedConfigPC24GCS_FIRECRACKER_MaterialPC10ACTOR_Type(char *a0, int a1, char *a2, int a3)
{
    int v;

    ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(a0, a3);
    GCS_FIRECRACKER_RefreshConfig__FP28GCS_FIRECRACKER_SortedConfig(a1);
    *(int *)(a0 + 0x2C) = a1;
    v = GCS_SPARK_RegisterSystem__FUi(*(int *)(a2 + 0));
    *(int *)(a0 + 0x1C) = v;
    v = GCS_STREAK_RegisterParticleSystem__FUi(*(int *)(a2 + 4));
    *(int *)(a0 + 0x20) = v;
    v = GCS_FIRESMOKE_RegisterSystem__FUi(*(int *)(a2 + 8));
    *(int *)(a0 + 0x24) = v;
    if (*(int *)(a2 + 0xC) != 0) {
        v = FLASH_RegisterSystem__FUi(*(int *)(a2 + 0xC));
    } else {
        v = -1;
    }
    *(int *)(a0 + 0x28) = v;
}
