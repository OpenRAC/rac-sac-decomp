/* __12StateMachine -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct StateMachine {
    int head;
    int field4;
    int pad8;
    int fieldC;
} StateMachine;

StateMachine *__12StateMachine(StateMachine *self)
{
    self->head = 0;
    self->field4 = 0;
    self->fieldC = 0;
    return self;
}
