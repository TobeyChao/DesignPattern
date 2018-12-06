#pragma once
#include <string>
class SchoolGirl
{
public:
	SchoolGirl(std::string name)
	{
		mName = name;
	}
	std::string GetName()
	{
		return mName;
	}
private:
	std::string mName;
};

class GiveGift
{
public:
	virtual std::string GiveFlower() = 0;
private:

};

class Persuit
{
public:
	Persuit(SchoolGirl * girl)
	{
		mGirl = girl;
		mName = "����";
	}

	std::string GiveFlower()
	{
		return "�͸�" + mGirl->GetName() + "õ�廨";
	}

	std::string GetName()
	{
		return mName;
	}
private:
	SchoolGirl * mGirl;
	std::string mName;
};

class Proxy
{
public:
	Proxy(SchoolGirl * girl)
	{
		mBoy = new Persuit(girl);
	}

	std::string GiveFlower()
	{
		return "����" + mBoy->GetName() + mBoy->GiveFlower();
	}
private:
	Persuit * mBoy;
};