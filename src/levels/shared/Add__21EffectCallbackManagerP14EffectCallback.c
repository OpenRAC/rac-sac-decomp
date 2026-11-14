/* Add__21EffectCallbackManagerP14EffectCallback -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Adds a callback to the manager's list. The source writes cb->previous = head
 * first, and the scheduler then swaps that store with the cb->next = NULL
 * store; the head is reloaded before the NULL write.
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
