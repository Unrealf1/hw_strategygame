#ifndef COMMON_ENTITY_INSTANCE_
#define COMMON_ENTITY_INSTANCE_
#include <vector>
#include <memory>
#include "ComponentInstance.hpp"
//#include "EntityType.hpp"
class EntityInstance
{
	friend class EntityType;
public:
	EntityInstance();
private:
	std::vector<std::shared_ptr<IComponentInstance>> component_instances;
};
#endif // !COMMON_ENTITY_INSTANCE_
