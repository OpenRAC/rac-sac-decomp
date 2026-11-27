/* func_00163018 -- 20 bytes.
 *
 * *out = self->word_5C ^ 1; return 0.
 */

typedef struct {
    char pad[0x5C];
    int word_5C;
} Obj_00163018;

int func_00163018(Obj_00163018 *self, int *out)
{
    *out = self->word_5C ^ 1;
    return 0;
}
