#pragma once
#include <string>

class Person
{
public:
	Person()
	{
	}

	Person(std::string name)
	{
		mPersonName = name;
	}

	virtual std::string GetDescription()
	{
		return "×°°çµÄ" + mPersonName;
	}
private:
	std::string mPersonName;
};

class Finery : public Person
{
public:
	Finery(Person * component)
	{
		mPreComponent = component;
	}
	virtual std::string GetDescription() = 0;

protected:
	Person * mPreComponent;
};

class Tshirts : public Finery
{
public:
	Tshirts(Person * component)
		:
		Finery(component)
	{
	}

	virtual std::string GetDescription()
	{
		return "³ÄÉÀ " + mPreComponent->GetDescription();
	}
private:

};

class Bigtrouser : public Finery
{
public:
	Bigtrouser(Person * component)
		:
		Finery(component)
	{
	}

	virtual std::string GetDescription()
	{
		return "¿å¿ã " + mPreComponent->GetDescription();
	}
private:

};