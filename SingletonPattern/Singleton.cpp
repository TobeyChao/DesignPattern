#include "Singleton.h"
#include <iostream>

Singleton* Singleton::instance = nullptr;
Singleton::Garbo Singleton::garbo;
std::mutex Singleton::lock;

Singleton * Singleton::GetInstance()
{
	if (instance == nullptr)
	{
		lock.lock();
		if (instance == nullptr)
		{
			instance = new Singleton();
		}
		lock.unlock();
	}
	return instance;
}

Singleton::~Singleton()
{
	std::cout << "����" << std::endl;
}

void Singleton::Print()
{
	std::cout << "���������ɹ�";
}

Singleton::Singleton()
{
	std::cout << "����" << std::endl;
}

SingletonStarve SingletonStarve::instance;

SingletonStarve::SingletonStarve()
{
	
}

SingletonStarve * SingletonStarve::GetInstance()
{
	return &instance;
}

SingletonStarve::~SingletonStarve()
{
}