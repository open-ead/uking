#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class EventSetCharAmbientScale : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(EventSetCharAmbientScale, ksys::act::ai::Action)
public:
    explicit EventSetCharAmbientScale(const InitArg& arg);
    ~EventSetCharAmbientScale() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // dynamic_param at offset 0x20
    float* mRscale_d{};
    // dynamic_param at offset 0x28
    float* mGscale_d{};
    // dynamic_param at offset 0x30
    float* mBscale_d{};
};

}  // namespace uking::action
