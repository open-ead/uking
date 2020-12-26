#pragma once

#include "Game/AI/Action/actionGuard.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class GuardWithAS : public Guard {
    SEAD_RTTI_OVERRIDE(GuardWithAS, Guard)
public:
    explicit GuardWithAS(const InitArg& arg);
    ~GuardWithAS() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0xa8
    const int* mASSlot_s{};
    // static_param at offset 0xb0
    sead::SafeString mASName_s{};
};

}  // namespace uking::action
