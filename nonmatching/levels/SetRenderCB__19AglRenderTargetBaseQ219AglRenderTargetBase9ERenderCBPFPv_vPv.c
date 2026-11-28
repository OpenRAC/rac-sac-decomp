/* FE.REL 0x0007B2B0, 24 bytes. Not matched on gnu-ee-20261015:-O2 -G0.
 * The returned advanced pointer has the right size but the compiler assigns
 * the intermediate value to a different register. Reopen with an authentic
 * source form that preserves the retail value flow.
 */

char *SetRenderCB__19AglRenderTargetBaseQ219AglRenderTargetBase9ERenderCBPFPv_vPv(char *self, int which, int cb, int user)
{
    self += which * 4;
    *(int *)(self + 0xE8) = cb;
    *(int *)(self + 0xF0) = user;
    return self;
}
