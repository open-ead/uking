#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class SetExtraEnergyOfPlayer : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(SetExtraEnergyOfPlayer, ksys::act::ai::Action)
public:
    explicit SetExtraEnergyOfPlayer(const InitArg& arg);
    ~SetExtraEnergyOfPlayer() override;

    bool init_(sead::Heap* heap) override;
    void loadParams_() override;

protected:
    // dynamic_param at offset 0x20
    int* mValue_d{};
    // dynamic_param at offset 0x28
    int* mProcessingMode_d{};
};

}  // namespace uking::action
