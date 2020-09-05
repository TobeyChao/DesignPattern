#pragma once
#include "Product.h"
class Factory
{
public:
	Factory()
	{
	}
	~Factory()
	{
	}
	virtual Fridge* CreateFridge() = 0;
	virtual AirConditioning* CreateAirConditioning() = 0;
	virtual Television* CreateTelevision() = 0;
private:

};

class TCLFactory : public Factory
{
public:
	TCLFactory()
	{
	}
	~TCLFactory()
	{
	}
	Fridge* CreateFridge() override
	{
		return new TCLFridge();
	}
	AirConditioning* CreateAirConditioning() override
	{
		return new TCLAirConditioning();
	}
	Television* CreateTelevision() override
	{
		return new TCLTelevision();
	}
private:

};

class HaierFactory : public Factory
{
public:
	HaierFactory()
	{
	}
	~HaierFactory()
	{
	}
	Fridge* CreateFridge() override
	{
		return new HaierFridge();
	}
	AirConditioning* CreateAirConditioning() override
	{
		return new HaierAirConditioning();
	}
	Television* CreateTelevision() override
	{
		return new HaierTelevision();
	}
private:

};