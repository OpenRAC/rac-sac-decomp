/* func_L01_014FC8 -- 516 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clips a polygon of 3D points against a slab in z (keeps the part between the
 * two planes) and returns the number of output points.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_00BAB0.c.
 */

int func_L01_014FC8(float lo, float hi, float *out, float *in, int n)
{
    int prevCls;
    int cls;
    int count;
    int i;
    int prev;
    float z;
    float t;
    float za;
    float zb;
    float ta;
    float tb;
    float inv;
    float cx;
    float cy;
    float cz;
    float px;
    float py;
    float pz;
    float cx2;
    float cy2;
    float cz2;
    float px2;
    float py2;
    float pz2;

    prevCls = 0;
    if (!(in[n * 3 - 1] < lo)) {
        prevCls = 2;
        if (hi < in[n * 3 - 1]) {
            prevCls = 1;
        }
    }
    prev = n - 1;
    count = 0;
    for (i = 0; i < n; i++) {
        {
            cls = 0;
            if (!(in[i * 3 + 2] < lo)) {
                cls = 2;
                if (hi < in[i * 3 + 2]) {
                    cls = 1;
                }
            }
            if (prevCls == 2) {
                count++;
                out[count * 3 - 3] = in[prev * 3];
                out[count * 3 - 2] = in[prev * 3 + 1];
                out[count * 3 - 1] = in[prev * 3 + 2];
            }
            if (prevCls != cls) {
                if (prevCls == 2 || cls == 2) {
                    z = lo;
                    if (prevCls != 0) {
                        z = hi;
                        if (cls == 0) {
                            z = lo;
                        }
                    }
                    cx = in[i * 3];
                    cy = in[i * 3 + 1];
                    cz = in[i * 3 + 2];
                    count++;
                    py = in[prev * 3 + 1];
                    pz = in[prev * 3 + 2];
                    px = in[prev * 3];
                    out[count * 3 - 1] = z;
                    t = (z - pz) / (cz - pz);
                    out[count * 3 - 3] = px + (cx - px) * t;
                    out[count * 3 - 2] = py + (cy - py) * t;
                } else {
                    if (prevCls == 0) {
                        za = lo;
                        zb = hi;
                    } else {
                        za = hi;
                        zb = lo;
                    }
                    cx2 = in[i * 3];
                    cy2 = in[i * 3 + 1];
                    cz2 = in[i * 3 + 2];
                    count++;
                    py2 = in[prev * 3 + 1];
                    pz2 = in[prev * 3 + 2];
                    px2 = in[prev * 3];
                    out[count * 3 - 1] = za;
                    inv = 1.0f / (cz2 - pz2);
                    ta = (za - pz2) * inv;
                    tb = (zb - pz2) * inv;
                    out[count * 3 - 3] = px2 + (cx2 - px2) * ta;
                    out[count * 3 - 2] = py2 + (cy2 - py2) * ta;
                    count++;
                    out[count * 3 - 3] = px2 + (cx2 - px2) * tb;
                    out[count * 3 - 2] = py2 + (cy2 - py2) * tb;
                    out[count * 3 - 1] = zb;
                }
            }
            prev = i;
            prevCls = cls;
        }
    }
    return count;
}
