/* Update__14ClankSuperKickf -- 164 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ClankSuperKick ClankSuperKick;
typedef struct AnimBody AnimBody;
typedef struct AnimHolder AnimHolder;
typedef struct FrameTrans FrameTrans;
typedef struct AnimTranslator AnimTranslator;

/* The sixteen bytes the state copies are not eight-byte aligned in the
 * object: the retail moves them with the unaligned word pair (ldl/ldr,
 * sdl/sdr), so the block is packed. */
typedef struct __attribute__((packed)) AnimBlock {
    long long lo;
    long long hi;
} AnimBlock;

struct AnimBody {
    char pad_00[0x30];
    union {
        AnimBlock block;
        struct {
            char pad_00[4];
            float f_34;
        } mid;
    } u_30;
    char pad_40[0x198];
    float f_1D8;
    char pad_1DC[0x84];
    AnimBody *f_260;
    int f_264;
};

struct AnimHolder {
    char pad_00[0x10];
    AnimBody *f_10;
};

struct ClankSuperKick {
    char pad_00[4];
    AnimHolder *f_04;
};

struct FrameTrans {
    char pad_00[4];
    float f_04;
};

extern unsigned char g_player_inPrimaryUpdate;

extern void Update__5Punchf(ClankSuperKick *self, float dt);
extern FrameTrans *AnimTranslator_GetFrameTrans__FP14AnimTranslator(
    AnimTranslator *translator);
extern void AnimTranslator_ClearFrameTrans__FP14AnimTranslator(
    AnimTranslator *translator);

void Update__14ClankSuperKickf(ClankSuperKick *self, float dt)
{
    AnimBody *body = self->f_04->f_10;
    float scale = body->f_1D8;

    Update__5Punchf(self, dt);

    body->f_1D8 = scale;
    body->f_264 &= ~2;

    if (g_player_inPrimaryUpdate) {
        AnimTranslator *translator = (AnimTranslator *)((char *)body + 0x1154);
        FrameTrans *trans = AnimTranslator_GetFrameTrans__FP14AnimTranslator(
            translator);
        AnimBody *other = body->f_260;

        body->u_30.mid.f_34 += trans->f_04;
        other->u_30.block = body->u_30.block;
        AnimTranslator_ClearFrameTrans__FP14AnimTranslator(translator);
    }
}
