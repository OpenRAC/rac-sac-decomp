/* Quat_Pack__FPC4QUAT -- 200 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct __attribute__((packed)) {
    float x;
    float y;
    float z;
    float w;
} QUAT;

#define QUAT_SCALE 1023.9f

unsigned int Quat_Pack__FPC4QUAT(const QUAT *q)
{
    QUAT t = *q;
    int ix, iy, iz;

    if (t.w < 0.0f) {
        t.x = -t.x;
        t.y = -t.y;
        t.z = -t.z;
    }

    ix = (int)(t.x * QUAT_SCALE);
    iy = (int)(t.y * QUAT_SCALE * 0.5f);
    iz = (int)(t.z * QUAT_SCALE);

    return (unsigned int)(ix + 0x400)
         | ((unsigned int)(iy + 0x200) << 11)
         | ((unsigned int)(iz + 0x400) << 21);
}
