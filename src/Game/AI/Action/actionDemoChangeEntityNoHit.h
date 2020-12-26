#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class DemoChangeEntityNoHit : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(DemoChangeEntityNoHit, ksys::act::ai::Action)
public:
    explicit DemoChangeEntityNoHit(const InitArg& arg);
    ~DemoChangeEntityNoHit() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0x20
    const int* mSetMotionType_s{};
    // static_param at offset 0x28
    const bool* mIsNoHit_s{};
};

}  // namespace uking::action
