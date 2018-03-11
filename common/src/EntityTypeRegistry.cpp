#include "EntityTypeRegistry.hpp"

EntityTypeRegistry::~EntityTypeRegistry()
{
	DeleteInstance();
}

EntityTypeRegistry::EntityTypeRegistry()
{
	self = nullptr;
}

EntityTypeRegistry* EntityTypeRegistry::GetInstance()
{
	if (!self)
	{
		self = new EntityTypeRegistry();
	}
	return self;
}

bool EntityTypeRegistry::DeleteInstance()
{
	if (self == nullptr)
	{
		delete self;
		self = nullptr;
		return true;
	}
	return false;
}

int EntityTypeRegistry::GetId(const std::string& key)
{
	return string_to_id[key];
}

std::string EntityTypeRegistry::GetString(const int id)
{
	return id_to_string[id];
}

std::shared_ptr<EntityType> EntityTypeRegistry::GetEntityTypeInstanceById(int id)
{
	return std::shared_ptr<EntityType> (&Registry[id]);
}

std::shared_ptr<EntityType> EntityTypeRegistry::GetEntityTypeInstanceByKey(const std::string& key)
{
	return std::shared_ptr<EntityType>(&Registry[GetId(key)]);
}