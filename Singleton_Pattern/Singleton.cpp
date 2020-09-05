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
	std::cout << "析构" << std::endl;
}

void Singleton::Print()
{
	std::cout << "创建单例成功";
}

Singleton::Singleton()
{
	std::cout << "构造" << std::endl;
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