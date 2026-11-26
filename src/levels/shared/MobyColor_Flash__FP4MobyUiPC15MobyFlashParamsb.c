/* MobyColor_Flash__FP4MobyUiPC15MobyFlashParamsb -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Appends a record to a 16-entry table while there is room.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_079AD8.c.
 */

typedef struct {
    void *first;
    unsigned char kind;
    char pad_05[3];
    unsigned int second;
    int zero_a;
    void *third;
    int zero_b;
} Entry;

extern unsigned int D_L01_0026CDC8;
extern Entry D_L01_003B2E00[];

void MobyColor_Flash__FP4MobyUiPC15MobyFlashParamsb(void *first, unsigned int second, void *third, int kind)
{
    unsigned int n = D_L01_0026CDC8;

    if (n < 16) {
        D_L01_0026CDC8 = n + 1;
        D_L01_003B2E00[n].first = first;
        D_L01_003B2E00[n].kind = kind;
        D_L01_003B2E00[n].second = second;
        D_L01_003B2E00[n].zero_a = 0;
        D_L01_003B2E00[n].third = third;
        D_L01_003B2E00[n].zero_b = 0;
    }
}
