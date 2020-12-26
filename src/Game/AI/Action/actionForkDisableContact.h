#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class ForkDisableContact : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(ForkDisableContact, ksys::act::ai::Action)
public:
    explicit ForkDisableContact(const InitArg& arg);
    ~ForkDisableContact() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0x70
    const int* mRecoverDelayTimeMin_s{};
};

}  // namespace uking::action
