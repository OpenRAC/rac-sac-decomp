/* CAMERA_PushSystemUpdate__F14CameraSystemIDPFPfPf14CameraSystemIDPv_P7MATRIX4Pv -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
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
