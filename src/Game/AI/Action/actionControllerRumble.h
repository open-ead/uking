#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class ControllerRumble : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(ControllerRumble, ksys::act::ai::Action)
public:
    explicit ControllerRumble(const InitArg& arg);
    ~ControllerRumble() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0x20
    const int* mPattern_s{};
    // dynamic2_param at offset 0x28
    int* mCount_d{};
};

}  // namespace uking::action
