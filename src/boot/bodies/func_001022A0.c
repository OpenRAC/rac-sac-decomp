/* func_001022A0 -- SCUS_976.23 0x001022A0, 28 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   SCUS_976.23 : func_001022A0 (28 octets)
 *   Trois lui distincts puis swc1 $f12/$f13/$f14 vers 0x001AAC10/14/18.
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

extern float g_boot_001AAC10;
extern float g_boot_001AAC14;
extern float g_boot_001AAC18;

void func_001022A0(float a, float b, float c)
{
    g_boot_001AAC10 = a;
    g_boot_001AAC14 = b;
    g_boot_001AAC18 = c;
}
