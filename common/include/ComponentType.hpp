#ifndef COMMON_COMPONENTTYPE_
#define COMMON_COMPONENTTYPE_

#include <memory>
#include "ComponentInstance.hpp"
class IComponentType
{
public:
	IComponentType();
	virtual std::shared_ptr<IComponentInstance> Create() = 0;
private:
	
};

#endif // !COMMON_COMPONENTTYPE_
