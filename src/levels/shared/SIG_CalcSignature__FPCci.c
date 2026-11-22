/* SIG_CalcSignature__FPCci -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Computes a table-driven CRC32.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/SIG_CalcSignature__FPCci_FRONTEND.c.
 */

typedef unsigned char u8;
typedef unsigned int u32;

extern u32 g_signatureTable[];

u32 SIG_CalcSignature__FPCci(const u8 *data, int size)
{
    const u8 *end = data + size;
    const u8 *cursor;
    u32 crc;

    if (data == 0)
        return 0;

    cursor = data;
    crc = 0xFFFFFFFFu;
    for (; cursor < end; cursor++)
        crc = (crc >> 8) ^ g_signatureTable[*cursor ^ (crc & 0xFF)];
    return ~crc;
}
