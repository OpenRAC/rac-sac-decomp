/* Close__12AglMovieBase -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglMovieBase AglMovieBase;

struct AglMovieBase {
    unsigned char pad[0x100];
    void *m_bink;
    int m_state;
};

extern void BinkClose(void *buffer);

void Close__12AglMovieBase(AglMovieBase *self)
{
    if (self->m_bink != 0) {
        BinkClose(self->m_bink);
        self->m_bink = 0;
    }
    self->m_state = 2;
}
