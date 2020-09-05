#include "Factory.h"
#include "Product.h"

Factory::Factory()
{
}

Factory::~Factory()
{
}

ConcreteFactory::ConcreteFactory()
{
}

ConcreteFactory::~ConcreteFactory()
{
}

Product* ConcreteFactory::CreateProduct()
{
	return new ConcreteProduct();
}