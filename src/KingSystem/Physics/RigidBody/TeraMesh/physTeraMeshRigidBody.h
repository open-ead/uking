#pragma once

#include "KingSystem/Physics/RigidBody/physRigidBody.h"

namespace ksys::phys {

class TeraMeshRigidBody : public RigidBody {
public:
    TeraMeshRigidBody(hkpRigidBody* hk_body, sead::Heap* heap);

    ~TeraMeshRigidBody() override;

    u32 getCollisionMasks(RigidBody::CollisionMasks* masks, const u32* unk,
                          const sead::Vector3f& contact_point) override;
};

}  // namespace ksys::phys
