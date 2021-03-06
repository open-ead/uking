#include "Game/AI/AI/aiLastBossDemoWarpRoot.h"

namespace uking::ai {

LastBossDemoWarpRoot::LastBossDemoWarpRoot(const InitArg& arg) : ksys::act::ai::Ai(arg) {}

LastBossDemoWarpRoot::~LastBossDemoWarpRoot() = default;

bool LastBossDemoWarpRoot::init_(sead::Heap* heap) {
    return ksys::act::ai::Ai::init_(heap);
}

void LastBossDemoWarpRoot::enter_(ksys::act::ai::InlineParamPack* params) {
    ksys::act::ai::Ai::enter_(params);
}

void LastBossDemoWarpRoot::leave_() {
    ksys::act::ai::Ai::leave_();
}

void LastBossDemoWarpRoot::loadParams_() {
    getStaticParam(&mIsPartsActorTgOn_s, "IsPartsActorTgOn");
}

}  // namespace uking::ai
