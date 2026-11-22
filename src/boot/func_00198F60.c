/* sceSifInitIopHeap -- 136 bytes.
 *
 * A function of the boot executable at 0x00198F60; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceSifInitIopHeap.c.
 */

/* -- connects to the IOP heap RPC server, retrying until the server is ready; returns 0 on success or -1 on failure. Ported from OpenRAC/rac2-decomp src/core/0011E740-rc2.c (iop_remote_cmd_bind_server). */
/* SPDX-License-Identifier: MIT
 * MIT License
 *
 * Copyright (c) 2026 Forja contributors
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

extern int func_00194A18(void *, unsigned int, int);
extern char D_00293040[];
extern int D_001D01BC;

int sceSifInitIopHeap(void) {
    int delay;
    int result;

    goto loop_3;
block_1:
    delay = 0x100000;
    do {
        delay -= 1;
    } while (delay != -1);
loop_3:
    if (func_00194A18(D_00293040, 0x80000003, 0) < 0) {
        result = -1;
    } else {
        if ((*(int *)((char *)(D_00293040) + (0x24))) == 0) {
            goto block_1;
        }
        D_001D01BC = 0;
        result = 0;
    }
    return result;
}
