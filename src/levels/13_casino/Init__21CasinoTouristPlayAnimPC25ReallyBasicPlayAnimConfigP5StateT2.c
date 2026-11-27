/* Init__21CasinoTouristPlayAnimPC25ReallyBasicPlayAnimConfigP5StateT2 -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct CasinoTouristPlayAnim {
    char pad[0xC];
    int first;
    int second;
    int third;
} CasinoTouristPlayAnim;

void Init__21CasinoTouristPlayAnimPC25ReallyBasicPlayAnimConfigP5StateT2(
    CasinoTouristPlayAnim *self, int first, int second, int third)
{
    self->second = second;
    self->third = third;
    self->first = first;
}
