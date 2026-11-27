/* GCSSOUND_CreateHandle__FP15GCSSOUND_Handle -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_gcsSound;

typedef struct GCSSOUND_Handle {
    char pad[8];
    int object;
} GCSSOUND_Handle;

void GCSSOUND_CreateHandle__FP15GCSSOUND_Handle(GCSSOUND_Handle *handle)
{
    handle->object = g_gcsSound;
}
