/* FE.REL 0x000814D0, 24 bytes. Not matched on gnu-ee-20261015:-O2 -G0.
 * Retail restores the global pointer as part of its runtime setup. This C
 * candidate only identifies the referenced global; it does not perform that
 * restore. Reopen after classifying the CRT operation without register pins.
 */

extern int D_00226B28;

void apePs2RestoreGP__Fv(void)
{
    (void)D_00226B28;
}
