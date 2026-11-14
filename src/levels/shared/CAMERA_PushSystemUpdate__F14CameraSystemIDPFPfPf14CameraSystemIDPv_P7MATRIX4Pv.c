/* CAMERA_PushSystemUpdate__F14CameraSystemIDPFPfPf14CameraSystemIDPv_P7MATRIX4Pv -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Appends a pair of pointers to the sample list of the given camera system id
 * and increments its counter. The samples of one camera system live in a 0x30
 * byte slot of a global array, with the counter at offset 0x20 of the slot.
 * The slot is reached twice through the global array, which is what produces
 * the retail address arithmetic (base + 0x20 + id*0x30 for the counter, base +
 * id*0x30 + 8*count for the samples).
 */

typedef struct CameraUpdate {
    float *pos;
    float *target;
} CameraUpdate;

typedef struct CameraSystem {
    CameraUpdate updates[4];
    int count;
    void *matrix;
    int pad[2];
} CameraSystem;

/* the camera system table lives at 0x2C8FD8 in the module (anonymous) */
extern CameraSystem D_L13_2C8FD8[];

void CAMERA_PushSystemUpdate__F14CameraSystemIDPFPfPf14CameraSystemIDPv_P7MATRIX4Pv(
    int id, float *pos, float *target)
{
    int n = D_L13_2C8FD8[id].count + 1;
    D_L13_2C8FD8[id].count = n;
    D_L13_2C8FD8[id].updates[n].pos = pos;
    D_L13_2C8FD8[id].updates[n].target = target;
}
