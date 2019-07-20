#pragma once
#include <mutex>

class Singleton
{
public:
	static Singleton* GetInstance();
	static std::mutex lock;
	~Singleton();
	void Print();

	class Garbo

	{
	public:
		~Garbo()
		{
			if (Singleton::instance)
			{
				delete instance;
			}
		}

	private:

	};
	static Garbo garbo;
private:
	Singleton();
private:
	static Singleton * instance;
};

class SingletonStarve
{
public:
	static SingletonStarve * GetInstance();
	~SingletonStarve();
	static SingletonStarve instance;
private:
	SingletonStarve();
};