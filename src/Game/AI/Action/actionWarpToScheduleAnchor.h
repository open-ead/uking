#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class WarpToScheduleAnchor : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(WarpToScheduleAnchor, ksys::act::ai::Action)
public:
    explicit WarpToScheduleAnchor(const InitArg& arg);
    ~WarpToScheduleAnchor() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // dynamic_param at offset 0x20
    sead::SafeString* mAnchorName_d{};
    // dynamic_param at offset 0x30
    sead::SafeString* mUniqueName_d{};
};

}  // namespace uking::action
