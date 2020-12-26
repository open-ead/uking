#pragma once

#include "Game/AI/Action/actionPlayerAction.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class PlayerIceBreak : public PlayerAction {
    SEAD_RTTI_OVERRIDE(PlayerIceBreak, PlayerAction)
public:
    explicit PlayerIceBreak(const InitArg& arg);
    ~PlayerIceBreak() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
