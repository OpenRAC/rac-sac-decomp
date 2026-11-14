/* func_L01_0490C8 -- 256 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Folds two angles back into ]-PI, PI]; the second one only when the flag at
 * offset 0x20 of the object is set. The first angle is f4 - angles->a and the
 * second is f8 + angles->b, each folded back into the range.
 */

typedef struct Angles Angles;
typedef struct Obj Obj;

struct Angles {
    float a;
    float b;
};

struct Obj {
    Angles *angles;
    float f4;
    float f8;
    unsigned char unknown_00c[0x14];
    int flag;
};

void func_L01_0490C8(Obj *self)
{
    float d = self->f4 - self->angles->a;

    if (d > 3.14159274f) {
        d -= 6.28318548f;
    } else if (d < -3.14159274f) {
        d += 6.28318548f;
    }
    self->f4 = d;
    if (self->flag == 0) {
        return;
    }
    {
        float d2 = self->f8 + self->angles->b;

        if (d2 > 3.14159274f) {
            d2 -= 6.28318548f;
        } else if (d2 < -3.14159274f) {
            d2 += 6.28318548f;
        }
        self->f8 = d2;
    }
}
