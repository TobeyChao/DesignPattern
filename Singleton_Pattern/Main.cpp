#include "Singleton.h"
#include "TSingleton.h"
#include <iostream>
class Base
{
public:
	Base()
	{
	}

	~Base()
	{
	}

	virtual void ShowDesc()
	{
		std::cout << "Base";
	}
private:

};

class MyClass : public Base, public TSingleton<MyClass>
{
public:
	virtual void ShowDesc() override
	{
		std::cout << "MyClass" << std::endl;
	}
};


int main(int argc, char* argv[])
{
	//Singleton* instance = Singleton::GetInstance();
	//instance->Print();

	//SingletonStarve* instance2 = SingletonStarve::GetInstance();
	MyClass* myClass = new MyClass();

	Base* base = myClass;
	base->ShowDesc();
	//MyClass* myClass2 = new MyClass(); //±¨´í
	MyClass::GetInstance().ShowDesc();
	return 0;
}