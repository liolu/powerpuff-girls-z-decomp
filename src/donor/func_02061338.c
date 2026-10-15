/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200da50 from projets/livly-garden/src/donor/func_0200da50.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
typedef void (*NNSG2dAnmCallBackPtr)(u32 data, fx32 currentFrame);
typedef enum NNSG2dAnmCallbackType {
    NNS_G2D_ANMCALLBACKTYPE_NONE = 0,
    NNS_G2D_ANMCALLBACKTYPE_LAST_FRM,
    NNS_G2D_ANMCALLBACKTYPE_SPEC_FRM,
    NNS_G2D_ANMCALLBACKTYPE_EVER_FRM,
    AnmCallbackType_MAX
} NNSG2dAnmCallbackType;
typedef struct NNSG2dCallBackFunctor {
    NNSG2dAnmCallbackType type;
    u32 param;
    NNSG2dAnmCallBackPtr pFunc;
    u16 frameIdx;
    u16 pad16_;
} NNSG2dCallBackFunctor, NNSG2dAnimCallBackFunctor;
typedef struct NNSG2dAnimFrameData {
    void *pContent;
    u16 frames;
    u16 pad16;
} NNSG2dAnimFrameData;
typedef NNSG2dAnimFrameData NNSG2dAnimFrame;
typedef enum NNSG2dAnimationPlayMode {
    NNS_G2D_ANIMATIONPLAYMODE_INVALID = 0x0,
    NNS_G2D_ANIMATIONPLAYMODE_FORWARD,
    NNS_G2D_ANIMATIONPLAYMODE_FORWARD_LOOP,
    NNS_G2D_ANIMATIONPLAYMODE_REVERSE,
    NNS_G2D_ANIMATIONPLAYMODE_REVERSE_LOOP,
    NNS_G2D_ANIMATIONPLAYMODE_MAX
} NNSG2dAnimationPlayMode;
typedef struct NNSG2dAnimSequenceData {
    u16 numFrames;
    u16 loopStartFrameIdx;
    u32 animType;
    NNSG2dAnimationPlayMode playMode;
    NNSG2dAnimFrameData *pAnmFrameArray;
} NNSG2dAnimSequenceData;
typedef NNSG2dAnimSequenceData NNSG2dAnimSequence;
typedef struct NNSG2dAnimController {
    const NNSG2dAnimFrame *pCurrent;
    const NNSG2dAnimFrame *pActiveCurrent;
    BOOL bReverse;
    BOOL bActive;
    fx32 currentTime;
    fx32 speed;
    NNSG2dAnimationPlayMode overriddenPlayMode;
    const NNSG2dAnimSequence *pAnimSequence;
    NNSG2dAnimCallBackFunctor callbackFunctor;
} NNSG2dAnimController;
extern void func_020616d4(NNSG2dAnimController *pAnimCtrl);
extern void NNS_G2dStopAnimCtrl(NNSG2dAnimController *pAnimCtrl);
inline void NNS_G2dStopAnimCtrl(NNSG2dAnimController *pAnimCtrl) {
    pAnimCtrl->bActive = 0;
}
static inline const NNSG2dAnimFrame *GetFrameBegin_(const NNSG2dAnimSequence *pSequence) {
    return pSequence->pAnmFrameArray;
}
static inline const NNSG2dAnimFrame *GetFrameEnd_(const NNSG2dAnimSequence *pSequence) {
    return pSequence->pAnmFrameArray + (pSequence->numFrames);
}
static inline const NNSG2dAnimFrame *GetFrameLoopBegin_(const NNSG2dAnimSequence *pSequence) {
    return pSequence->pAnmFrameArray + pSequence->loopStartFrameIdx;
}
static inline NNSG2dAnimationPlayMode GetAnimationPlayMode_(const NNSG2dAnimController *pAnimCtrl) {
    if (pAnimCtrl->overriddenPlayMode != NNS_G2D_ANIMATIONPLAYMODE_INVALID) {
        return pAnimCtrl->overriddenPlayMode;
    } else {
        return pAnimCtrl->pAnimSequence->playMode;
    }
}
static inline BOOL IsLoopAnimSequence_(const NNSG2dAnimController *pAnimCtrl) {
    {
        const NNSG2dAnimationPlayMode playMode = GetAnimationPlayMode_(pAnimCtrl);
        return (playMode == NNS_G2D_ANIMATIONPLAYMODE_FORWARD_LOOP || playMode == NNS_G2D_ANIMATIONPLAYMODE_REVERSE_LOOP) ? 1
                                                                                                                          : 0;
    }
}
static inline BOOL IsReversePlayAnim_(const NNSG2dAnimController *pAnimCtrl) {
    {
        const NNSG2dAnimationPlayMode playMode = GetAnimationPlayMode_(pAnimCtrl);
        return (playMode == NNS_G2D_ANIMATIONPLAYMODE_REVERSE || playMode == NNS_G2D_ANIMATIONPLAYMODE_REVERSE_LOOP) ? 1 : 0;
    }
}
static inline BOOL IsReachStartEdge_(const NNSG2dAnimController *pAnimCtrl, const NNSG2dAnimFrame *pFrame) {
    return (pFrame <= (GetFrameLoopBegin_(pAnimCtrl->pAnimSequence) - 1)) ? 1 : 0;
}
static inline void SequenceEdgeHandleCommon_(NNSG2dAnimController *pAnimCtrl) {
    if (pAnimCtrl->callbackFunctor.type == NNS_G2D_ANMCALLBACKTYPE_LAST_FRM) {
        (*pAnimCtrl->callbackFunctor.pFunc)(pAnimCtrl->callbackFunctor.param, pAnimCtrl->currentTime);
    }
    if (!IsLoopAnimSequence_(pAnimCtrl)) {
        NNS_G2dStopAnimCtrl(pAnimCtrl);
    } else {
        func_020616d4(pAnimCtrl);
    }
}
static inline void SequenceEdgeHandleReverse_(NNSG2dAnimController *pAnimCtrl) {
    pAnimCtrl->bReverse = pAnimCtrl->bReverse ^ 1;
    if (IsReachStartEdge_(pAnimCtrl, pAnimCtrl->pCurrent)) {
        SequenceEdgeHandleCommon_(pAnimCtrl);
    }
}
static inline void SequenceEdgeHandleNormal_(NNSG2dAnimController *pAnimCtrl) {
    SequenceEdgeHandleCommon_(pAnimCtrl);
}
static inline void ValidateAnimFrame_(NNSG2dAnimController *pAnimCtrl, const NNSG2dAnimFrame **pFrame) {
    if (*pFrame > GetFrameEnd_(pAnimCtrl->pAnimSequence) - 1) {
        *pFrame = GetFrameEnd_(pAnimCtrl->pAnimSequence) - 1;
    } else if (*pFrame < GetFrameBegin_(pAnimCtrl->pAnimSequence)) {
        *pFrame = GetFrameBegin_(pAnimCtrl->pAnimSequence);
    }
}
extern void func_020616d4(NNSG2dAnimController *pAnimCtrl);
void func_02061338(NNSG2dAnimController *pAnimCtrl) {

    if (IsReversePlayAnim_(pAnimCtrl)) {
        SequenceEdgeHandleReverse_(pAnimCtrl);
    } else {
        SequenceEdgeHandleNormal_(pAnimCtrl);
    }

    ValidateAnimFrame_(pAnimCtrl, &pAnimCtrl->pCurrent);
}
