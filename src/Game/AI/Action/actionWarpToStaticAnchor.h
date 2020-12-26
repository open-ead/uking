#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class WarpToStaticAnchor : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(WarpToStaticAnchor, ksys::act::ai::Action)
public:
    explicit WarpToStaticAnchor(const InitArg& arg);
    ~WarpToStaticAnchor() override;

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
