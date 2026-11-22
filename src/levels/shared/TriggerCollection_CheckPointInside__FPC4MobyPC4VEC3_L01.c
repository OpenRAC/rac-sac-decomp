/* TriggerCollection_CheckPointInside__FPC4MobyPC4VEC3 -- 140 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Searches a pointer table for a matching item.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1C4940.c.
 */

typedef struct SC { char pad_00[0x45]; unsigned char count; char pad_46[0x0E]; void **items; } SC;
extern int TRIGGER_CheckPointInside__FPC7TriggerPC4VEC3(void *, void *);
void *TriggerCollection_CheckPointInside__FPC4MobyPC4VEC3(SC *c, void *key){ unsigned int i; void **p = c->items; for (i = 0; i < c->count; i++) { void *it = p[i]; if (it && TRIGGER_CheckPointInside__FPC7TriggerPC4VEC3(it, key)) return it; } return 0; }
