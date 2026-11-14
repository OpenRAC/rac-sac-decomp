/* func_00100350 -- 48 bytes.
 *
 * A function of the boot executable at 0x00100350; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Builds a 32-byte request block on the stack, issues system call 0x40, stores
 * the result in a global word and returns it. The stack frame uses 16-byte
 * slots, so this is built with the sdk991111 route.
 *
 * The field order matters: the scheduler emits the two writes of 1 in reverse
 * offset order, while the retail writes offset 0x4 then 0x8, so the C writes
 * the field at 0x8 first.
 */

struct BootRequest
{
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
};

extern int g_boot_00206300;
extern int func_190D60(struct BootRequest *request);

int func_00100350(void)
{
    struct BootRequest request;
    int result;

    request.f08 = 1;
    request.f04 = 1;
    result = func_190D60(&request);
    g_boot_00206300 = result;
    return result;
}
