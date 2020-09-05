#pragma once
class Product;
class Factory
{
public:
	~Factory();
	virtual Product* CreateProduct() = 0;

protected:
	Factory();

private:

};

class ConcreteFactory : public Factory
{
public:
	ConcreteFactory();
	~ConcreteFactory();

	Product* CreateProduct() override;
private:

};