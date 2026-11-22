/* TJZIP_ParseRawDataBlock__FPPUcT0PUi -- 444 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies a run of bytes from the input stream while updating a CRC.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_10FC20.c.
 */

typedef unsigned char u8;

extern int (*g_pCallback)(u8 *lim);
extern u8 *g_pCallbackAt;
extern unsigned g_signatureTable[];

#define REFILL(q) \
    if (g_pCallback != 0) { \
        if (g_pCallbackAt != 0 && (q) >= g_pCallbackAt - 0x20) { \
            g_pCallbackAt = (u8 *)g_pCallback(g_pCallbackAt); \
        } \
    }

void TJZIP_ParseRawDataBlock__FPPUcT0PUi(u8 **src, u8 **dst, unsigned *crc)
{
    u8 *p;
    u8 *q;
    unsigned n;
    unsigned i;

    p = *src;
    if (*p == 0) {
        q = p + 1;
        *src = q;
        REFILL(q);
        n = ((*src)[1] << 8) | (*src)[0];
        q = *src + 2;
        *src = q;
        REFILL(q);
    } else {
        n = *p + 2;
        q = p + 1;
        *src = q;
        REFILL(q);
    }
    for (i = 0; i < n; i++) {
        **dst = **src;
        *crc = (*crc >> 8) ^ g_signatureTable[**src ^ (*crc & 0xFF)];
        (*src)++;
        q = *src;
        REFILL(q);
        (*dst)++;
    }
}
