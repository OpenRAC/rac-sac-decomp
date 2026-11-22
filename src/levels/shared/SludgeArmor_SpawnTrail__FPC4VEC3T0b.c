/* SludgeArmor_SpawnTrail__FPC4VEC3T0b -- 268 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Dispatches a draw helper with one of two tables, then walks a list.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1D72F8.c.
 */

typedef struct Node { struct Node *prev; struct Node *next; char *base; unsigned short first; unsigned short count; } Node;
extern int D_L03_00297518;
extern char D_L03_00297658[];
extern char D_L03_00297678[];
extern char D_L03_002975B8[];
extern void ScorchMark_Spawn__FiPC4VEC3T1P18DECAL_CSRampConfigP18DECAL_CircleVolume(int a, int b, int c, char *t1, char *t2);
extern void func_L03_150040(char *p, float a, float b);

void SludgeArmor_SpawnTrail__FPC4VEC3T0b(int a, int b, int flag)
{
    if (flag)
        ScorchMark_Spawn__FiPC4VEC3T1P18DECAL_CSRampConfigP18DECAL_CircleVolume(D_L03_00297518, a, b, D_L03_00297678, D_L03_002975B8);
    else
        ScorchMark_Spawn__FiPC4VEC3T1P18DECAL_CSRampConfigP18DECAL_CircleVolume(D_L03_00297518, a, b, D_L03_00297658, D_L03_002975B8);
}

void func_1D7368(Node *head)
{
    Node *n;
    char *p, *end;

    for (n = head->next; n != head; n = n->next) {
        p = n->base + n->first * 0x48;
        end = p + n->count * 0x48;
        do {
            func_L03_150040(p + 0x10, 1.0f, 0.5f);
            p += 0x48;
        } while (p != end);
    }
}
