/* _sceCd_cd_callback -- 160 bytes.
 *
 * A function of the boot executable at 0x00182C88; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_sceCd_cd_callback.c.
 */

/* _sceCd_cd_callback — N-command completion callback.
 RAC2 src/core/00124568.c func_00124630. RAC5 data addresses from the
 retail lui 0x1F0 + signed offsets (base ):
 -0x38A0 -> (r1_D_00131414), -0x389C -> (..18)
 -0x38D8 -> (r1_D_001313E8), -0x38EC -> (..D4)
 -0x38E0 -> (r1_D_001313E0), -0x38CC -> (..F0)
 lui 0x1FE -0x23C0 -> (r1_D_00159840)
 func_00190D90 resolves from config/boot/symbols.tsv. */

extern volatile int D_001CDAA0;
extern volatile int D_001CDAA4;
extern volatile int D_001CDA54;
extern volatile int D_001CDA60;
extern volatile int D_001CDA68;
extern volatile int D_001CDA74;
extern void *volatile D_0028EC00;

extern int func_00190D90(int);

void _sceCd_cd_callback(int *arg0) {
    D_001CDAA0 = *arg0;
    D_001CDAA4 = D_001CDAA0;
    if (D_001CDAA0 == 0xB) {
        D_001CDAA0 = 0;
        D_001CDA74 = 0;
        return;
    }
    func_00190D90(D_001CDA68);
    if (D_001CDA54 != 0 && D_0028EC00 != 0) {
        func_00190D90(D_001CDA60);
    } else {
        D_001CDA74 = 0;
    }
    D_001CDAA0 = 0;
}
