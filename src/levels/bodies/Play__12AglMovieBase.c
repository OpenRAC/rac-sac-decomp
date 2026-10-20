/* Play__12AglMovieBase -- FE.REL 0x003D18, 8 bytes.
 *
 * Empty method of the movie base object.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 */

typedef struct AglMovieBase AglMovieBase;

void Play(AglMovieBase *self)
{
    (void)self;
}
