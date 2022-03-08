#pragma once
#include "IComponent.h"
#include "Gameplay/Physics/TriggerVolume.h"
#include "Gameplay/Components/RenderComponent.h"

/// <summary>
/// Provides an example behaviour that uses some of the trigger interface to change the material
/// of the game object the component is attached to when entering or leaving a trigger
/// </summary>
class SpikeBehaviour : public Gameplay::IComponent {

public:
	typedef std::shared_ptr<SpikeBehaviour> Sptr;
	SpikeBehaviour();
	virtual ~SpikeBehaviour();

	// Inherited from IComponent

	virtual void OnTriggerVolumeEntered(const std::shared_ptr<Gameplay::Physics::RigidBody>& body) override;

	
	MAKE_TYPENAME(SpikeBehaviour);

protected:
	bool _playerInTrigger;
};