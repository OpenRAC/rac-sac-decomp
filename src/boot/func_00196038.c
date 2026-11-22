/* sceOpen -- 656 bytes.
 *
 * A function of the boot executable at 0x00196038; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceOpen.c.
 */

/* sceOpen — RAC2 src/core/0011E0D8.c func_0011E0D8 (Lombyte sceopen.c),
 adapted to the RAC5 retail . Retail facts folded in:
 - the file-system RPC goes through the 10-argument wrapper at
 (the 10th word, 0, sits at 0(sp) like sceClose);
 - func_00190D60's last field is the semaphore name pointer ;
 - lock , unlock , slot alloc , check
 , func_00195B38 .
 Data: request , reply , slot table ,
 client , fs-init flag , mutex . */

typedef signed int s32;
typedef unsigned int u32;
typedef unsigned char u8;

typedef char *va_list_1BF80;

struct FsOpenRequest {
    s32 completion_semaphore;
    void *result;
    s32 result_size;
    s32 flags;
    s32 mode;
    char path[0x400];
    s32 slot;
};

struct SemaphoreParameters {
    s32 count;
    s32 max_count;
    s32 init_count;
    s32 wait_threads;
    s32 attr;
    s32 option;
};

struct SifFileSlot {
    s32 fd;
    s32 flags;
    s32 reserved8;
    s32 reservedC;
};

extern s32 D_001D01A4[];
extern s32 D_001D01B0[];
extern struct FsOpenRequest D_00291840;
extern u8 D_00292480[];
extern struct SifFileSlot D_00292D40[];
extern u8 D_00292F40[];
extern char D_002058E0[];

extern int func_00195A10(s32);
extern int func_00195B38(void);
extern int func_00195D40(void);
extern struct SifFileSlot *func_00195418(void);
extern int func_00195A40(void);
extern int func_00190D60(struct SemaphoreParameters *);
extern int func_00190D70(s32);
extern int func_00190DA0(s32);
extern int func_00190D80(s32);
extern int func_001954A0(void *, s32, s32, void *, s32, void *, s32, void *, void *, s32);

s32 sceOpen(const u8 *path, s32 flags, ...) {
    struct SemaphoreParameters semaphore_parameters;
    va_list_1BF80 arguments;
    s32 result;
    s32 path_index;
    s32 slot_mutex;
    s32 mode;
    s32 completion_semaphore;
    s32 slot_index;
    s32 return_value;
    struct SifFileSlot *file_slot;
    struct FsOpenRequest *request;

    request = &D_00291840;
    arguments = __builtin_next_arg(flags) - 0x30;
    func_00195A10(0);
    if (D_001D01A4[0] == 0) {
        func_00195B38();
    }
    if (func_00195D40() != 0) {
        func_00195A40();
        return -0x10004;
    }
    file_slot = func_00195418();
    if (file_slot == 0) {
        func_00195A40();
        return -0x13;
    }
    mode = *(s32 *)arguments;
    for (path_index = 0; path_index < 0x400; path_index++) {
        if ((request->path[path_index] = path[path_index]) == 0) {
            break;
        }
    }
    if (path_index == 0x400) {
        request->path[0x3FF] = 0;
    }
    slot_index = file_slot - D_00292D40;
    request->flags = (s32)(flags & 0x7FFFFFFF);
    request->mode = mode;
    semaphore_parameters.max_count = 1;
    request->slot = slot_index;
    semaphore_parameters.init_count = 0;
    semaphore_parameters.option = (s32)D_002058E0;
    completion_semaphore = func_00190D60(&semaphore_parameters);
    request->result = &result;
    request->completion_semaphore = completion_semaphore;
    request->result_size = 4;
    if (func_001954A0(D_00292F40, 0, 0, &D_00291840, 0x418, D_00292480, 4, 0, 0, 0) < 0) {
        func_00190D70(completion_semaphore);
        func_00195A40();
        return -0xB;
    }
    return_value = *(u32 *)((u32)D_00292480 | 0x20000000);
    func_00195A40();
    if (return_value == 0) {
        func_00190D70(completion_semaphore);
        return -0xB;
    }
    func_00190DA0(completion_semaphore);
    func_00190D70(completion_semaphore);
    if (result < 0) {
        func_00190DA0(D_001D01B0[0]);
        file_slot->flags = 0;
        func_00190D80(D_001D01B0[0]);
        return result;
    }
    return_value = slot_index;
    func_00190DA0(D_001D01B0[0]);
    slot_mutex = D_001D01B0[0];
    file_slot->fd = result;
    file_slot->flags = (s32)(file_slot->flags | flags);
    func_00190D80(slot_mutex);
    return return_value;
}
