#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class HorseKickBackAction : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(HorseKickBackAction, ksys::act::ai::Action)
public:
    explicit HorseKickBackAction(const InitArg& arg);
    ~HorseKickBackAction() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0x20
    const int* mSucceedGear_s{};
    // static_param at offset 0x28
    sead::SafeString mASName_s{};
};

}  // namespace uking::action
