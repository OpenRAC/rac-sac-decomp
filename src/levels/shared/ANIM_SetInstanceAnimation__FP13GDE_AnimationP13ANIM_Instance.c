/* ANIM_SetInstanceAnimation__FP13GDE_AnimationP13ANIM_Instance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets the animation of an animation instance: it is stored in the first field
 * of the instance.
 */

typedef struct GDE_Animation GDE_Animation;
typedef struct ANIM_Instance ANIM_Instance;

struct ANIM_Instance {
    GDE_Animation *animation;
};

void ANIM_SetInstanceAnimation__FP13GDE_AnimationP13ANIM_Instance(
    GDE_Animation *animation, ANIM_Instance *instance)
{
    instance->animation = animation;
}
