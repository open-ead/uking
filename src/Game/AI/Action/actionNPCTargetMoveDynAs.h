#pragma once

#include "Game/AI/Action/actionNPCTargetMove.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class NPCTargetMoveDynAs : public NPCTargetMove {
    SEAD_RTTI_OVERRIDE(NPCTargetMoveDynAs, NPCTargetMove)
public:
    explicit NPCTargetMoveDynAs(const InitArg& arg);
    ~NPCTargetMoveDynAs() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // dynamic_param at offset 0x178
    sead::SafeString* mDynASKeyName_d{};
};

}  // namespace uking::action
