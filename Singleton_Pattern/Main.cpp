#include "Singleton.h"
#include "TSingleton.h"
#include <iostream>
class MyClass : public TSingleton<MyClass>
{
public:
	void ShowDesc()
	{
		std::cout << "���������ɹ�";
	}
};


int main(int argc, char* argv[])
{
	Singleton* instance = Singleton::GetInstance();
	instance->Print();

	SingletonStarve* instance2 = SingletonStarve::GetInstance();

	MyClass* myClass = new MyClass();
	//MyClass* myClass2 = new MyClass(); //����
	MyClass::GetInstance().ShowDesc();
	return 0;
}