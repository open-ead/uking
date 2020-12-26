#include "Game/AI/Action/actionPlayerCutHorseJumpLand.h"

namespace uking::action {

PlayerCutHorseJumpLand::PlayerCutHorseJumpLand(const InitArg& arg) : PlayerAction(arg) {}

PlayerCutHorseJumpLand::~PlayerCutHorseJumpLand() = default;

bool PlayerCutHorseJumpLand::init_(sead::Heap* heap) {
    return PlayerAction::init_(heap);
}

void PlayerCutHorseJumpLand::enter_(ksys::act::ai::InlineParamPack* params) {
    PlayerAction::enter_(params);
}

void PlayerCutHorseJumpLand::leave_() {
    PlayerAction::leave_();
}

void PlayerCutHorseJumpLand::loadParams_() {}

void PlayerCutHorseJumpLand::calc_() {
    PlayerAction::calc_();
}

}  // namespace uking::action
