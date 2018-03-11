#ifndef COMMON_ENTITY_TYPE_
#define COMMON_ENTITY_TYPE_
#include <vector>
#include <memory>
#include "ComponentType.hpp"
#include "EntityInstance.hpp"
class EntityType
{
public:
	EntityType();
	std::shared_ptr<EntityInstance> Create();
private:
	std::vector<std::shared_ptr<IComponentType>> component_types;
};
#endif // !COMMON_ENTITY_TYPE_
