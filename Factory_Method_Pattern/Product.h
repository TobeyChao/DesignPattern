#pragma once
class Product
{
public:
	~Product();

protected:
	Product();

private:

};

class ConcreteProduct : public Product
{
public:
	ConcreteProduct();
	~ConcreteProduct();

private:

};