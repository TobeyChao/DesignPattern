#pragma once
// ���󹤳�ģʽ�빤������ģʽ�������ǣ�ǰ���кܶ����Ʒ�����ֲ�Ʒ���ɲ�Ʒ�壬һ����Ʒ���һ����������
// ��1.һ����Ʒ�壺���䡢�յ������� ������������TCL
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