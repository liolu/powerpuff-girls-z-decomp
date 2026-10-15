/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200dba8 from projets/livly-garden/src/donor/func_0200dba8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef signed long s32;
typedef long long s64;
typedef int BOOL;
typedef s32 fx32;
typedef enum NNSG2dAnimationPlayMode {
    NNS_G2D_ANIMATIONPLAYMODE_INVALID = 0,
    NNS_G2D_ANIMATIONPLAYMODE_FORWARD,
    NNS_G2D_ANIMATIONPLAYMODE_FORWARD_LOOP,
    NNS_G2D_ANIMATIONPLAYMODE_REVERSE,
    NNS_G2D_ANIMATIONPLAYMODE_REVERSE_LOOP
} NNSG2dAnimationPlayMode;
typedef enum NNSG2dAnmCallbackType {
    NNS_G2D_ANMCALLBACKTYPE_NONE = 0,
    NNS_G2D_ANMCALLBACKTYPE_LAST_FRM,
    NNS_G2D_ANMCALLBACKTYPE_SPEC_FRM,
    NNS_G2D_ANMCALLBACKTYPE_EVER_FRM
} NNSG2dAnmCallbackType;
typedef struct NNSG2dAnimFrameData {
    void *pContent;
    u16 frames;
    u16 pad16;
} NNSG2dAnimFrame;
typedef struct NNSG2dAnimSequenceData {
    u16 numFrames;
    u16 loopStartFrameIdx;
    u32 animType;
    NNSG2dAnimationPlayMode playMode;
    NNSG2dAnimFrame *pAnmFrameArray;
} NNSG2dAnimSequence;
typedef void (*NNSG2dAnmCallBackPtr)(u32 data, fx32 currentFrame);
typedef struct NNSG2dCallBackFunctor {
    NNSG2dAnmCallbackType type;
    u32 param;
    NNSG2dAnmCallBackPtr pFunc;
    u16 frameIdx;
    u16 pad16_;
} NNSG2dCallBackFunctor;
typedef struct NNSG2dAnimController {
    const NNSG2dAnimFrame *pCurrent;
    const NNSG2dAnimFrame *pActiveCurrent;
    BOOL bReverse;
    BOOL bActive;
    fx32 currentTime;
    fx32 speed;
    NNSG2dAnimationPlayMode overriddenPlayMode;
    const NNSG2dAnimSequence *pAnimSequence;
    NNSG2dCallBackFunctor callbackFunctor;
} NNSG2dAnimController;
extern int func_02069c18(int value);
extern void func_02061338(NNSG2dAnimController *pAnimCtrl);
static inline fx32 FX_Mul(fx32 v1, fx32 v2) {
    return (fx32) (((s64) v1 * v2 + 0x800) >> 12);
}
static inline const NNSG2dAnimFrame *GetFrameEnd_(const NNSG2dAnimSequence *pSequence) {
    (void) 0;
    return pSequence->pAnmFrameArray + pSequence->numFrames;
}
static inline const NNSG2dAnimFrame *GetFrameLoopBegin_(const NNSG2dAnimSequence *pSequence) {
    (void) 0;
    return pSequence->pAnmFrameArray + pSequence->loopStartFrameIdx;
}
static inline u16 GetCurrentFrameIdx_(const NNSG2dAnimController *pAnimCtrl) {
    (void) 0;
    return (u16) (((u32) pAnimCtrl->pCurrent - (u32) pAnimCtrl->pAnimSequence->pAnmFrameArray) / sizeof(NNSG2dAnimFrame));
}
static inline BOOL IsAnimCtrlMovingForward_(const NNSG2dAnimController *pAnimCtrl) {
    (void) 0;
    return (pAnimCtrl->speed > 0) ^ pAnimCtrl->bReverse ? 1 : 0;
}
static inline BOOL ShouldAnmCtrlMoveNext_(NNSG2dAnimController *pAnimCtrl) {
    (void) 0;
    (void) 0;
    if (pAnimCtrl->bActive && pAnimCtrl->currentTime >= 0x1000 * (int) pAnimCtrl->pCurrent->frames) {
        return 1;
    }
    return 0;
}
static inline void CallbackFuncHandling_(const NNSG2dCallBackFunctor *pFunctor, u16 currentFrameIdx) {
    (void) 0;
    switch (pFunctor->type) {
        case NNS_G2D_ANMCALLBACKTYPE_SPEC_FRM:
            if (currentFrameIdx == pFunctor->frameIdx) {
                (*pFunctor->pFunc)(pFunctor->param, currentFrameIdx);
            }
            break;
        case NNS_G2D_ANMCALLBACKTYPE_EVER_FRM:
            (*pFunctor->pFunc)(pFunctor->param, currentFrameIdx);
            break;
    }
}
static inline BOOL IsReachStartEdge_(const NNSG2dAnimController *pAnimCtrl, const NNSG2dAnimFrame *pFrame) {
    (void) 0;
    (void) 0;
    return pFrame <= GetFrameLoopBegin_(pAnimCtrl->pAnimSequence) - 1 ? 1 : 0;
}
static inline BOOL IsReachEdge_(const NNSG2dAnimController *pAnimCtrl, const NNSG2dAnimFrame *pFrame) {
    (void) 0;
    (void) 0;
    if (IsAnimCtrlMovingForward_(pAnimCtrl)) {
        return pFrame >= GetFrameEnd_(pAnimCtrl->pAnimSequence) ? 1 : 0;
    } else {
        return IsReachStartEdge_(pAnimCtrl, pFrame);
    }
}
static inline void MoveNext_(NNSG2dAnimController *pAnimCtrl) {
    (void) 0;
    if (IsAnimCtrlMovingForward_(pAnimCtrl)) {
        pAnimCtrl->pCurrent++;
    } else {
        pAnimCtrl->pCurrent--;
    }
}
BOOL func_02061484(NNSG2dAnimController *pAnimCtrl, fx32 frames) {
    BOOL bChangeFrame = 0;

    (void) 0;
    (void) 0;
    (void) 0;

    if (pAnimCtrl->bActive != 1) {
        return 0;
    }

    pAnimCtrl->currentTime += func_02069c18(FX_Mul(pAnimCtrl->speed, frames));

    while (ShouldAnmCtrlMoveNext_(pAnimCtrl)) {
        bChangeFrame = 1;
        pAnimCtrl->currentTime -= 0x1000 * (int) pAnimCtrl->pCurrent->frames;
        MoveNext_(pAnimCtrl);

        if (IsReachEdge_(pAnimCtrl, pAnimCtrl->pCurrent)) {
            func_02061338(pAnimCtrl);
        }

        if (pAnimCtrl->pCurrent->frames != 0) {
            pAnimCtrl->pActiveCurrent = pAnimCtrl->pCurrent;
        }

        if (pAnimCtrl->callbackFunctor.type != NNS_G2D_ANMCALLBACKTYPE_NONE) {
            CallbackFuncHandling_(&pAnimCtrl->callbackFunctor, GetCurrentFrameIdx_(pAnimCtrl));
        }
    }
    return bChangeFrame;
}
