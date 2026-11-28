typedef struct Player {
    char pad[1708];
    int flags;
} Player;

void FIRSTPERSON_SetShogun__FP6PLAYERb(Player *self, int enabled)
{
    self->flags = (self->flags & -5) | ((enabled & 1) << 2);
}
