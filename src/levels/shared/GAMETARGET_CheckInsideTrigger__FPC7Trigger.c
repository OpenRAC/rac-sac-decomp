/* GAMETARGET_CheckInsideTrigger__FPC7Trigger -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Trigger Trigger;
typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

extern int TRIGGER_CheckPointInside__FPC7TriggerPC4VEC3(const Trigger *trigger,
                                                         const VEC3 *point);
extern VEC3 D_L01_31AB24;

int GAMETARGET_CheckInsideTrigger__FPC7Trigger(Trigger *trigger)
{
    return TRIGGER_CheckPointInside__FPC7TriggerPC4VEC3(trigger, &D_L01_31AB24);
}
