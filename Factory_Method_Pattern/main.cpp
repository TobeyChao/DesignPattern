#include "Factory.h"

int main()
{
	Factory* factory = new ConcreteFactory();
	factory->CreateProduct();
	return 0;
}