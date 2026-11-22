/* RotateVec3__FP4VEC3PC4VEC3T1ff -- 168 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Rotates the vector about the unit axis by the given sine and cosine
 * (Rodrigues form: projection plus cosine-scaled rejection plus sine-scaled
 * cross product).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_129450.c.
 */

void RotateVec3__FP4VEC3PC4VEC3T1ff(float *out, float *v, float *n, float sine, float cosine)
{
    float vx = v[0];
    float vy = v[1];
    float nx = n[0];
    float ny = n[1];
    float vz = v[2];
    float nz = n[2];
    float dot;
    float px;
    float rx;
    float cx;
    float py;
    float ry;
    float cy;
    float pz;
    float rz;
    float cz;

    dot = vx * nx + vy * ny + vz * nz;
    cx = ny * vz - nz * vy;
    cy = nz * vx - nx * vz;
    cz = nx * vy - ny * vx;
    px = nx * dot;
    py = ny * dot;
    pz = nz * dot;
    rx = vx - px;
    ry = vy - py;
    rz = vz - pz;
    out[0] = px + cosine * rx + sine * cx;
    out[1] = py + cosine * ry + sine * cy;
    out[2] = pz + cosine * rz + sine * cz;
}
