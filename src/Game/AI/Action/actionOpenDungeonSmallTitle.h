#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class OpenDungeonSmallTitle : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(OpenDungeonSmallTitle, ksys::act::ai::Action)
public:
    explicit OpenDungeonSmallTitle(const InitArg& arg);
    ~OpenDungeonSmallTitle() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0x20
    sead::SafeString mMstxt_s{};
    // dynamic_param at offset 0x30
    sead::SafeString* mSubMstxt_d{};
};

}  // namespace uking::action
