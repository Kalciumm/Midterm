#include "Gameplay/Components/SpikeBehaviour.h"
#include "Gameplay/Components/ComponentManager.h"
#include "Gameplay/GameObject.h"

SpikeBehaviour::SpikeBehaviour() :
	IComponent()
{ }
SpikeBehaviour::~SpikeBehaviour() = default;


void SpikeBehaviour::OnTriggerVolumeEntered(const std::shared_ptr<Gameplay::Physics::RigidBody>& body)
{
	body->SetLinearVelocity(glm::vec3(0.f));
	//trigger some form of feedback here
	std::cout << "u died";
}

