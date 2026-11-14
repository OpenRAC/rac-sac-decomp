/* Add__21EffectCallbackManagerP14EffectCallback -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct EffectCallback EffectCallback;
typedef struct EffectCallbackManager EffectCallbackManager;

struct EffectCallback {
    EffectCallback *previous;
    EffectCallback *next;
};

struct EffectCallbackManager {
    EffectCallback *head;
};

void Add__21EffectCallbackManagerP14EffectCallback(EffectCallbackManager *self,
                                                   EffectCallback *callback)
{
    if (self->head)
        self->head->next = callback;
    callback->previous = self->head;
    callback->next = 0;
    self->head = callback;
}
