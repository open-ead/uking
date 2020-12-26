#include "Game/AI/Action/actionPlayerLadderJump.h"

namespace uking::action {

PlayerLadderJump::PlayerLadderJump(const InitArg& arg) : PlayerAction(arg) {}

PlayerLadderJump::~PlayerLadderJump() = default;

bool PlayerLadderJump::init_(sead::Heap* heap) {
    return PlayerAction::init_(heap);
}

void PlayerLadderJump::enter_(ksys::act::ai::InlineParamPack* params) {
    PlayerAction::enter_(params);
}

void PlayerLadderJump::leave_() {
    PlayerAction::leave_();
}

void PlayerLadderJump::loadParams_() {
    getStaticParam(&mEnergyJump_s, "EnergyJump");
}

void PlayerLadderJump::calc_() {
    PlayerAction::calc_();
}

}  // namespace uking::action
