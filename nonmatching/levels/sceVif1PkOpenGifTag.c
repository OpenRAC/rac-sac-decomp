/* FE.REL 0x000CAC68, 24 bytes. Not matched on gnu-ee-20261015:-O2 -G0.
 * The tag write and cursor update have a different schedule from retail.
 * Reopen when a source form preserves the observed operation order.
 */

typedef unsigned int u128 __attribute__((mode(TI)));

typedef struct sceVif1Packet {
    u128 *pCurrent;
    int pad[4];
    u128 *pGifTag;
} sceVif1Packet;

void sceVif1PkOpenGifTag(sceVif1Packet *p, u128 tag)
{
    u128 *slot = p->pCurrent;
    p->pCurrent = slot + 1;
    *slot = tag;
    p->pGifTag = slot;
}
