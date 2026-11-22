/* dpadd -- 88 bytes.
 *
 * A function of the boot executable at 0x00114390; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/dpadd.c.
 */

/* dpadd - libgcc double addition through the unpacked fp_number_form. */

typedef struct {
    int class;
    int sign;
    int normal_exp;
    int pad;
    long long fraction;
    int pad2;
} fp_number_type;

extern void func_001140B0(double *a, fp_number_type *x);
extern fp_number_type *func_00114150(fp_number_type *x, fp_number_type *y,
                               fp_number_type *z);
extern double func_00113F80(fp_number_type *z);

double dpadd(double a, double b) {
    fp_number_type x, y, z;
    fp_number_type *r;

    func_001140B0(&a, &x);
    func_001140B0(&b, &y);
    r = func_00114150(&x, &y, &z);
    return func_00113F80(r);
}
