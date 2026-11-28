/* LEVEL1.REL 0x0003F638, 24-byte catalogue interval. Not promoted as a match.
 * Grok's 24-byte candidate emits this routine and an adjacent empty routine
 * in one source. The first routine is retained here; review the boundary and
 * prove each routine separately before accepting either one.
 */

typedef struct Moby {
    char pad[0x45];
    unsigned char state;
} Moby;

void Arena_FinishFailCB__FPv(Moby *moby)
{
    moby->state = 11;
}
