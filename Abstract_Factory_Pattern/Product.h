#pragma once
// 抽象工厂模式与工厂方法模式的区别是，前者有很多类产品，多种产品构成产品族，一个产品族归一个工厂生产
// 例1.一个产品族：冰箱、空调、电视 工厂：海尔、TCL
#include <iostream>

class Fridge
{
public:
	Fridge()
	{
	}
	~Fridge()
	{

	}

	virtual void ShowDesc() = 0;
private:

};

class HaierFridge : public Fridge
{
public:
	HaierFridge()
	{
		ShowDesc();
	}
	~HaierFridge()
	{

	}
	void ShowDesc() override
	{
		std::cout << "HaierFridge" << std::endl;
	}
private:

};

class TCLFridge : public Fridge
{
public:
	TCLFridge()
	{
		ShowDesc();
	}
	~TCLFridge()
	{

	}
	void ShowDesc() override
	{
		std::cout << "TCLFridge" << std::endl;
	}
private:

};

class AirConditioning
{
public:
	AirConditioning()
	{
	}
	~AirConditioning()
	{

	}

	virtual void ShowDesc() = 0;
private:

};

class HaierAirConditioning : public AirConditioning
{
public:
	HaierAirConditioning()
	{
		ShowDesc();
	}
	~HaierAirConditioning()
	{
	}
	void ShowDesc() override
	{
		std::cout << "HaierAirConditioning" << std::endl;
	}
private:

};

class TCLAirConditioning : public AirConditioning
{
public:
	TCLAirConditioning()
	{
		ShowDesc();
	}
	~TCLAirConditioning()
	{

	}
	void ShowDesc() override
	{
		std::cout << "TCLAirConditioning" << std::endl;
	}
private:

};

class Television
{
public:
	Television()
	{
	}
	~Television()
	{

	}
	virtual void ShowDesc() = 0;
private:

};

class HaierTelevision : public Television
{
public:
	HaierTelevision()
	{
		ShowDesc();
	}
	~HaierTelevision()
	{

	}
	void ShowDesc() override
	{
		std::cout << "HaierTelevision" << std::endl;
	}
private:

};

class TCLTelevision : public Television
{
public:
	TCLTelevision()
	{
		ShowDesc();
	}
	~TCLTelevision()
	{

	}
	void ShowDesc() override
	{
		std::cout << "TCLTelevision" << std::endl;
	}
private:

};