#include "EntityType.hpp"

EntityType::EntityType()
{

}

std::shared_ptr<EntityInstance> EntityType::Create()
{
	std::shared_ptr<EntityInstance> instance(new EntityInstance());
	instance->component_instances.resize(component_types.size());
	for (unsigned int i = 0; i < component_types.size(); ++i)
	{
		instance->component_instances[i] = component_types[i]->Create();
	}
	return instance;
}
