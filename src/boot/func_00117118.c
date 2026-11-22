/* func_00117118 -- 144 bytes.
 *
 * A function of the boot executable at 0x00117118; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __cp_push_exception.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__cp_push_exception.c.
 */

/* -- allocates and fills a C++ exception record and pushes it on the current exception chain. Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/__cp_push_exception_FRONTEND.c (__cp_push_exception_FRONTEND). */
extern void *func_00117060(int);
extern void func_001170A8(void);
extern int *func_001160A0(void);

void func_00117118(int first, int second, int third)
{
    char *entry = (char *)func_00117060(0x30);
    int *head;
    *(int *)(entry + 0x0c) = second;
    *(int *)(entry + 0x10) = third;
    *(int *)(entry + 0x08) = first;
    *(int *)(entry + 0x28) = first;
    *(long long *)(entry + 0x20) = 0;
    *(int *)(entry + 0x14) = 0;
    *(void (**)(void))entry = func_001170A8;
    *(short *)(entry + 0x04) = 4;
    *(short *)(entry + 0x06) = 1;
    head = func_001160A0();
    *(int *)(entry + 0x18) = *head;
    *head = (int)entry;
}
