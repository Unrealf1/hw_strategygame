#pragma once

#ifndef STRATEGY_GAME_COMPONENT_INSTANCE_HPP_
#define STRATEGY_GAME_COMPONENT_INSTANCE_HPP_

class IComponentInstance
{
	friend class IComponentInstance;
public:
	virtual ~IComponentInstance() = 0;
private:

};

#endif // STRATEGYGAME_COMPONENT_INSTANCE_HPP_