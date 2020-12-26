#include "Game/AI/Action/actionPlayASForTimelineWithSword.h"

namespace uking::action {

PlayASForTimelineWithSword::PlayASForTimelineWithSword(const InitArg& arg)
    : PlayASForTimeline(arg) {}

PlayASForTimelineWithSword::~PlayASForTimelineWithSword() = default;

bool PlayASForTimelineWithSword::init_(sead::Heap* heap) {
    return PlayASForTimeline::init_(heap);
}

void PlayASForTimelineWithSword::enter_(ksys::act::ai::InlineParamPack* params) {
    PlayASForTimeline::enter_(params);
}

void PlayASForTimelineWithSword::leave_() {
    PlayASForTimeline::leave_();
}

void PlayASForTimelineWithSword::loadParams_() {
    PlayASForTimeline::loadParams_();
    getDynamicParam(&mIsHold_d, "IsHold");
}

void PlayASForTimelineWithSword::calc_() {
    PlayASForTimeline::calc_();
}

}  // namespace uking::action
