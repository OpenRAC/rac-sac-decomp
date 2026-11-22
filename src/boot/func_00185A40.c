/* func_00185A40 -- 32 bytes.
 *
 * A function of the boot executable at 0x00185A40; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body GLOBALWAD_FindSound__FUi.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/GLOBALWAD_FindSound__FUi.c.
 */

extern int func_00186130(
    unsigned int id, void *callback);
extern void func_001855E0(void);

int func_00185A40(unsigned int id) {
    return func_00186130(
        id, (void *)func_001855E0);
}
