/* GetMovieStatus__12AglMovieBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglMovieBase AglMovieBase;

struct AglMovieBase
{
    char pad_00[0x104];
    int movieStatus;
};

int GetMovieStatus__12AglMovieBase(AglMovieBase *self)
{
    return self->movieStatus;
}
