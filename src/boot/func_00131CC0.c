/* func_00131CC0 -- 424 bytes.
 *
 * A function of the boot executable at 0x00131CC0; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern void func_12F028(int a0, int a1, int a2);
extern void func_132118(int a0, int a1, int a2, int a3);
extern void func_12F850(int a0, int a1, int a2, int a3);
extern void func_132200(int a0, int a1, int a2, int a3);
extern void func_12E480(int a0, int a1, int a2);
extern void func_12FA60(int a0, int a1, int a2, int a3);
extern void func_1308E8(int a0, int a1);
extern void func_132388(int a0);
extern void func_131468(int a0, int a1);
extern void func_1324C0(int a0);
extern void func_132538(int a0);
extern void func_132350(int a0);

void func_00131CC0(int n, int p, int q, int r, int t)
{
    int m;

    if (n >= 0x21) {
        m = n >> 2;
        func_12F028(n, p, t + (r - m) * 4);

        if (n >= 0x201) {
            func_132118(m, p, r, t);
            func_12F850(m, p + m * 4, r, t);
            func_132118(m, p + m * 8, r, t);
            func_132118(m, p + m * 12, r, t);
        } else if (m >= 0x21) {
            func_12FA60(n, p, r, t);
        } else {
            func_132200(n, p, r, t);
        }

        func_12E480(n, q, p);
    } else {
        if (n >= 9) {
            if (n == 0x20) {
                func_1308E8(p, t - 0x20 + r * 4);
                func_132388(p);
            } else {
                func_131468(p, t);
                func_1324C0(p);
            }
        } else {
            if (n == 8)
                func_132538(p);
            else if (n == 4)
                func_132350(p);
        }
    }
}
