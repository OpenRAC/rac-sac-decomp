/* FE.REL 0x00003FC0, 24 bytes. Not matched on gnu-ee-20261015:-O2 -G0.
 * The candidate aligns two offsets but the compiler reverses their operations
 * and stores. Reopen with a source form that preserves the retail ordering.
 */

typedef struct AglMovie {
    char pad[0x14];
    int x;
    int y;
} AglMovie;

void Ps2BinkBufferSetOffset__8AglMovieP13PS2BINKBUFFERii(AglMovie *self, int x, int y)
{
    int mask = -8;
    y &= mask;
    x &= mask;
    self->y = y;
    self->x = x;
}
