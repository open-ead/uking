#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class MarkPositionFromGameData : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(MarkPositionFromGameData, ksys::act::ai::Action)
public:
    explicit MarkPositionFromGameData(const InitArg& arg);
    ~MarkPositionFromGameData() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // dynamic_param at offset 0x20
    int* mPinColorIdx_d{};
    // dynamic_param at offset 0x28
    sead::SafeString* mGameDataVec3_d{};
};

}  // namespace uking::action
