#pragma once

#ifndef STRATEGY_GAME_ENTITY_TYPE_HPP_
#define STRATEGY_GAME_ENTITY_TYPE_HPP_

#include <vector>
#include <memory>
#include "ComponentType.hpp"
#include "EntityInstance.hpp"

class EntityType
{
public:
	EntityType();
	~EntityType();
	std::shared_ptr<EntityInstance> Create();
private:
	std::vector<std::shared_ptr<IComponentType>> component_types;
};

#endif // !STRATEGYGAME_ENTITYTYPE_HPP_
