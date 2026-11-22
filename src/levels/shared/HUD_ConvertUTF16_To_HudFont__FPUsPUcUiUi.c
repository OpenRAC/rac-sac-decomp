/* HUD_ConvertUTF16_To_HudFont__FPUsPUcUiUi -- 540 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Converts a zero-terminated UCS-2 string into the game's byte charset, with a
 * size limit; returns the length written plus one.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/16_multiplayer_01/LEVEL_16_09F658.c.
 */

extern int func_FE_034248(unsigned int c);

int HUD_ConvertUTF16_To_HudFont__FPUsPUcUiUi(unsigned short *src, unsigned char *dst, int srcn, unsigned int dstmax)
{
    unsigned int n;
    int ret;
    unsigned short c;
    unsigned char a;
    int b;

    ret = 0;
    if (src == 0) {
        return 0;
    }
    if (dst == 0) {
        return 0;
    }
    if (dstmax == 0) {
        return 0;
    }
    if (srcn == 0) {
        return 0;
    }
    n = 0;
    if (n < dstmax && *src != 0) {
        do {
            c = *src;
            a = 0;
            switch (c) {
            case 0xAE:
                a = 0x8A;
                break;
            case 0x2026:
                a = 0x89;
                break;
            case 0x20AC:
                a = 0xB5;
                break;
            }
            b = 0;
            if (a != 0) {
                *dst = a;
            } else {
                switch (c) {
                case 0xFFE5:
                    a = 0xA5;
                    b = 1;
                    break;
                case 0xFF53:
                    a = 0x27;
                    break;
                case 0xFF01:
                    a = 0x28;
                    break;
                case 0xFF1F:
                    a = 0x29;
                    break;
                case 0x266A:
                    a = 0x2A;
                    break;
                default:
                    if ((unsigned short)(c - 0x2FF0) < 0x120) {
                        a = c & 0xFF;
                    }
                    break;
                }
                if (a != 0) {
                    if (b == 0) {
                        n++;
                        *dst = 0x93;
                        dst++;
                    }
                    if (n >= dstmax) {
                        goto next;
                    }
                    *dst = a;
                } else {
                    if (c != 0xA4 && func_FE_034248(c) != 0) {
                        a = 0xA4;
                        if (c != 0x2122) {
                            a = c;
                        }
                    } else {
                        a = 0xAA;
                    }
                    *dst = a;
                }
            }
            src++;
            dst++;
            n++;
            ret++;
            srcn--;
        next:
            if (srcn == 0) {
                break;
            }
            if (dstmax <= n) {
                *dst = 0;
                return ret + 1;
            }
        } while (*src != 0);
    }
    *dst = 0;
    return ret + 1;
}
