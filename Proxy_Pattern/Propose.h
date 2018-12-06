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
		mName = "张晓";
	}

	std::string GiveFlower()
	{
		return "送给" + mGirl->GetName() + "玫瑰花";
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
		return "我替" + mBoy->GetName() + mBoy->GiveFlower();
	}
private:
	Persuit * mBoy;
};