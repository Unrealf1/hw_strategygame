#ifndef COMMON_COMPONENTINSTANCE_
#define COMMON_COMPONENTINSTANCE_
class IComponentInstance
{
	friend class IComponentInstance;
public:
	IComponentInstance();
private:
	
};

class HealthBar : public IComponentInstance
{
public:
	HealthBar();
private:
	int health;
};
#endif // !_COMMON_COMPONENTINSTANCE_