/* Quat_Pack__FPC4QUAT -- 200 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Packs a quaternion into one 32-bit word. The retail copies the sixteen bytes
 * of the quaternion (four floats) to the frame with unaligned accesses, so the
 * structure is packed. It tests the sign of the fourth component and negates
 * the three first ones in the frame copy if it is negative. It then scales the
 * three components by 1023.9f (the second one by half of it, 0.5), converts
 * them to integers and packs them on eleven bits each, with the biases 0x400,
 * 0x200 and 0x400.
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
