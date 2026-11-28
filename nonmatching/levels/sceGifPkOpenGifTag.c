/* FE.REL 0x000CA7A8, 24 bytes. Not matched on gnu-ee-20261015:-O2 -G0.
 * The source updates the packet cursor and writes a tag, but the compiler
 * schedules those operations differently from retail. Reopen when a source
 * form preserves the observed tag, cursor, and saved tag-pointer order.
 */

typedef unsigned int u128 __attribute__((mode(TI)));

typedef struct sceGifPacket {
    u128 *pCurrent;
    int pad[2];
    u128 *pGifTag;
} sceGifPacket;

void sceGifPkOpenGifTag(sceGifPacket *p, u128 tag)
{
    u128 *slot = p->pCurrent;
    p->pCurrent = slot + 1;
    *slot = tag;
    p->pGifTag = slot;
}
