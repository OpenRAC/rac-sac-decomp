/* func_FE_0D7440 -- 260 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Reads the shared header of a frame record and returns where its instructions
 * start. Ported from OpenRAC/rac2-decomp src/core/00123C28-rc2.c
 * (eh_extract_cie_info).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_025FB8.c.
 */

/* SPDX-License-Identifier: MIT
 * MIT License
 *
 * Copyright (c) 2026 RC2 decomp contributions
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
typedef int s32;
typedef signed char s8;
typedef unsigned char u8;

extern int strcmp(const char *, const char *);
extern unsigned int strlen(const char *);
extern unsigned char *func_FE_0D6D48(s32, s32);
extern unsigned char *func_FE_0D6D90(s32, s32);

extern s8 D_FE_0013F330[];
extern s8 D_FE_0013F338[];

typedef struct {
    s32 v;
} __attribute__((packed)) UA32;

s8 *func_FE_0D7440(s32 fde, s32 info) {
    s32 uleb_value[4];
    s32 cie_ptr;
    s32 aug_end;
    s32 read_ptr;

    cie_ptr = (fde - *(s32 *)(fde + 4)) + 0xD;
    *(s32 *)info = cie_ptr;
    if (strcmp((char *)cie_ptr, (char *) D_FE_0013F330) != 0 && strcmp((char *)*(s32 *)info, (char *) D_FE_0013F338) != 0 && *(s8 *)*(s32 *)info != 0x7A) {
        return 0;
    }
    aug_end = *(s32 *)info + strlen((char *)*(s32 *)info);
    read_ptr = aug_end + 1;
    if (strcmp((char *)*(s32 *)info, (char *) D_FE_0013F338) == 0) {
        *(s32 *)(info + 4) = ((UA32 *)read_ptr)->v;
        read_ptr = aug_end + 5;
    } else {
        *(s32 *)(info + 4) = 0;
    }
    read_ptr = func_FE_0D6D90(func_FE_0D6D48(read_ptr, info + 8), info + 0xC);
    *(s32 *)(info + 0x10) = *(u8 *)read_ptr;
    read_ptr = read_ptr + 1;
    if (*(s8 *)*(s32 *)info == 0x7A) {
        read_ptr = func_FE_0D6D48(read_ptr, (s32) uleb_value) + uleb_value[0];
    }
    return (s8 *) read_ptr;
}
