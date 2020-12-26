#include "Game/AI/Action/actionEventTrigNullASPlay.h"

namespace uking::action {

EventTrigNullASPlay::EventTrigNullASPlay(const InitArg& arg) : ksys::act::ai::Action(arg) {}

EventTrigNullASPlay::~EventTrigNullASPlay() = default;

bool EventTrigNullASPlay::init_(sead::Heap* heap) {
    return ksys::act::ai::Action::init_(heap);
}

void EventTrigNullASPlay::enter_(ksys::act::ai::InlineParamPack* params) {
    ksys::act::ai::Action::enter_(params);
}

void EventTrigNullASPlay::leave_() {
    ksys::act::ai::Action::leave_();
}

void EventTrigNullASPlay::loadParams_() {
    getDynamicParam(&mASSlot_d, "ASSlot");
    getDynamicParam(&mSequenceBank_d, "SequenceBank");
    getDynamicParam(&mIsIgnoreSame_d, "IsIgnoreSame");
    getDynamicParam(&mASName_d, "ASName");
}

void EventTrigNullASPlay::calc_() {
    ksys::act::ai::Action::calc_();
}

}  // namespace uking::action
