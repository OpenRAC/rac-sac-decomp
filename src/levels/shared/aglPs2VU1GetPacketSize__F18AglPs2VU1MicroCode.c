/* aglPs2VU1GetPacketSize__F18AglPs2VU1MicroCode -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct {
    int pad[3];
    int size;
} VU1Micro;

extern VU1Micro g_vu1Micro[];

int aglPs2VU1GetPacketSize__F18AglPs2VU1MicroCode(int code)
{
    return g_vu1Micro[code].size;
}
